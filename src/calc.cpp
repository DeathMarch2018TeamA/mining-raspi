#include <iostream>	//cout
#include <string>	//string
#include <stdlib.h>	//rand,srand

#include "calc.h"

void CalcAndOutput(const std::string& src){
	std::cout << "src : \"" << src << "\"\n";
	std::cout << "hash: " << picosha2::hash256_hex_string(src)  << std::endl;
}


bool match_condition(std::string& hash, std::string& zero){

	if(hash.substr(0, zero.size())==zero)	return true;
	else return false;

}

void randam_nonce(std::string& nonce){

	const char set[] = "0123456789abcdef";
	int randam;

	for(int i=0; i<nonce.size(); i++){
		randam = rand() % 16;
		nonce[i]= set[randam];
	}

}


std::string hash_sha256(std::string& block_nonce){

	std::string hash_1st;
	std::string hash_2nd;

	hash_1st = picosha2::hash256_hex_string(block_nonce);
	hash_2nd = picosha2::hash256_hex_string(hash_1st);

	//for debug
	//CalcAndOutput(block_nonce);	CalcAndOutput(hash_1st);

	return hash_2nd;

}


std::string calc_nance(std::string& zero_size, std::string& block){

	//initial value
	std::string block_nonce;
	std::string hash;
	std::string nonce(8,' ');

	while(1){
		randam_nonce(nonce);
		block_nonce = block + nonce;

		hash=hash_sha256(block_nonce);

		//check condition
		if(match_condition(hash, zero_size)) break;

	}

	return nonce;

}

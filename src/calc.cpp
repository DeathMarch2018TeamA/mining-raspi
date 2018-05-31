#include "calc.hpp"

#include <iostream>	//cout
#include <string>	//string
#include <stdlib.h>	//rand,srand

using namespace std;

/*
void CalcAndOutput(const std::string& src){
	std::cout << "src : \"" << src << "\"\n";
	std::cout << "hash: " << picosha2::hash256_hex_string(src)  << std::endl;
}
*/
using namespace std;

bool match_condition(string& hash, string& zero){

	if(hash.substr(0, zero.size())==zero)	return true;
	else return false;

}

void randam_nonce(string& nonce){

	const char set[] = "0123456789abcdef";
	int randam;

	for(int i=0; i<nonce.size(); i++){
		randam = rand() % 16;
		nonce[i]= set[randam];
	}

}


string hash_sha256(string& block_nonce){

	string hash_1st;
	string hash_2nd;

	hash_1st = picosha2::hash256_hex_string(block_nonce);
	hash_2nd = picosha2::hash256_hex_string(hash_1st);

	//for debug
	//CalcAndOutput(block_nonce);	CalcAndOutput(hash_1st);

	return hash_2nd;

}


string calc_nance(string& zero_size, string& block){

	//initial value
	string block_nonce;
	string hash;
	string nonce(8,' ');

	while(1){
		randam_nonce(nonce);
		block_nonce = block + nonce;

		hash=hash_sha256(block_nonce);

		//check condition
		if(match_condition(hash, zero_size)) break;

	}

	return nonce;

}

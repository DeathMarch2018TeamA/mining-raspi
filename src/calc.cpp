#include "calc.hpp"

#include <iostream>	//cout
#include <string>	//string
#include <stdlib.h>	//rand,srand

namespace shigeCoin{

using namespace std;

void random_nonce(string *nonce);

string *calc_nance(string *zero_size, string *block){
	//initial value
	string hash;
	string *nonce;
    nonce = new string(8, ' ');

    do{
		random_nonce(nonce);
		hash = hash_sha256(block + nonce);
    }while(match_condition(hash, *zero_size));

	return nonce;
}

bool match_condition(string *hash, string *zero){
    return hash->substr(0, zero->size()) == *zero;
}

string hash_sha256(string *block_nonce){
	string hash_1st, hash_2nd;

   	hash_1st = picosha2::hash256_hex_string(*block_nonce);
	hash_2nd = picosha2::hash256_hex_string(hash_1st);

	return hash_2nd;
}

void randam_nonce(string *nonce){

	const char set[] = "0123456789abcdef";
	int randam;

	for(int i = 0; i < nonce.size(); i++){
		randam = rand() % 16;
		(*nonce)[i]= set[randam];
	}

}

}

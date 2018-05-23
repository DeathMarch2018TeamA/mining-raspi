#ifndef _CALC_H_
#define _CALC_H_

#include "picosha2.h"
#include "calc.cpp"

/**
 * @brief check condition
 * @param (hash) check hash
 * @param (zero) condition
 * @return true:condition OK, false:condition NG
 */
bool match_condition(std::string& hash, std::string& zero);

/**
 * @brief twice calc hash value 
 * @param (block_nonce) input string
 * @return hash value
 */
std::string hash_sha256(std::string& block_nonce);

/**
 * @brief calc nance value
 * @param (zero_size) zero string
 * @param (block) block string
 * @return nance value
 */
std::string calc_nance(std::string& zero_size, std::string& block);


#endif // _CALC_H_
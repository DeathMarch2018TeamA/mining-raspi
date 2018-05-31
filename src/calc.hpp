#ifndef _CALC_H_
#define _CALC_H_

#include <string>

#include "picosha2.h"

using std::string;

namespace shigeCoin{

/**
 * @brief check condition
 * @param (hash) check hash
 * @param (zero) condition
 * @return true:condition OK, false:condition NG
 */
bool match_condition(string *hash, string *zero);

/**
 * @brief twice calc hash value 
 * @param (block_nonce) input string
 * @return hash value
 */
string hash_sha256(string *block_nonce);

/**
 * @brief calc nance value
 * @param (zero_size) zero string
 * @param (block) block string
 * @return nance value
 */
string *calc_nonce(string *zero_size, string *block);

}

#endif // _CALC_H_

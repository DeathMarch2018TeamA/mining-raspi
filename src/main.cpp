#include <iostream>	//cout
#include <string>	//string
#include <stdlib.h>	//rand,srand

#include "comm.hpp"
#include "calc.h"

using namespace std;

int main()
{
  char team_name[] = "shigeCoin";
  string *p_zero_num, *p_block, *p_nonce;
  string zero_num, block, nonce;

  // seed set for randam_nonce()
  srand((unsigned) time(NULL));
  
  // sign up for server
  if (!initialize(team_name)) {
    cout << "failed to initialize socket" << endl;
    return -1;
  }
  p_zero_num = get_zero();
  zero_num = *p_zero_num;
  cout << "zero_num:" << p_zero_num << endl;

  // nonce calculate
  for (int i = 0; i < 10; i++) {
    p_block = get_block();
    block = *p_block;
    nonce = calc_nance(zero_num, block);
    p_nonce = &nonce;

    if (!send_nonce(p_nonce)) {
      cout << "failed to send nonce" << endl;
    }

    cout << "block:" << *p_block << endl;
    cout << "nonce:" << *p_nonce << endl;
  }

  if (!finalize()) {
    cout << "failed to finalize socket" << endl;
  }
  
  return 0;
}


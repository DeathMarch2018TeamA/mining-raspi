#include <iostream>	//cout
#include <string>	//string
#include <stdlib.h>	//rand,srand

#include "calc.h"

int main()
{

	//input data
	std::string zero_size(1,'0');
	std::string block(10,'a');

    //initial value
	std::string nonce;

	//set srand
	srand(2);

	nonce=calc_nance(zero_size,block);

	//print nonce
	std::cout<<"nonce:"<< nonce <<std::endl;

    return 0;

}


//
//  main.cpp
//  pointer_address
//
//  Rev: 1
//  Created by Jonathan Reiter on 6/3/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>

using namespace std;

int main() {
	
	int *p;			// pointer 'p' of type int; can only point to variables of type int
	int n = 35;
	
	p = &n;			// 'p' is pointing to var 'n' which is type int; using '&' to get the address of 'n'

	cout << "n is " << n << " and the pointer p is at address: " << p << endl;
	
    return 0;
}

//
//  main.cpp
//  swapping_ptr_function
//
//	Rev: 1
//  Created by Jon Reiter on 6/3/16.
//  Copyright © 2016 Jon Reiter. All rights reserved.
//

#include <iostream>
#include <stdlib.h>


using namespace std;


void swaps(int *u, int *u1);


int main() {

	int a = 0, z = 10;
	
	cout << "starting off with: " << a << " and " << z << endl;
	cout << "calling the swap function..." << endl;
	
	swaps(&a, &z);
	
	cout << "after calling swap " << a << " and " << z << endl;
	
    return 0;
}


void swaps(int *u, int *u1) {
	int temp = *u;		// put u in temp
	*u = *u1;			// then put u1 in u
	*u1 = temp;			// then put temp (original u) in u1
}
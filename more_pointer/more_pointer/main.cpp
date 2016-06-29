//
//  main.cpp
//  more_pointer
//
//	Rev: 1
//  Created by Jon Reiter on 6/3/16.
//  Copyright © 2016 Jon Reiter. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

void double_it(int *p);
void triple_it(int *z);
void to_fahrenheit(int *f);

int main() {

	int num = 45, five = 5, ten = 10, one = 1, celsius = 0;
	
	// assigning the addresses of the vars to pointers
	int *pnum = &num;
	int *pfive = &five;
	int *pten = &ten;
	int *pone = &one;
	
	
	cout << "value of ptr pnum is  " << pnum << endl;
	cout << "value of ptr pfive is  " << pfive << endl;
	cout << "value of ptr pten is  " << pten << endl;
	cout << "value of ptr pone is  " << pone << endl;
	
	cout << "values of the vars are: ";
	cout << num << ", " << five << ", " << ten << ", " << one << ", " << celsius << endl;
	cout << endl;
	
	/*
		passing the address of the num var to the function double_it
		where pointers are waiting for address locations to be passed
	 
		the address of &num will be passed to the double_it function in 
		the int *p variable
	*/
	double_it(&num);
	double_it(&five);
	triple_it(&ten);
	triple_it(&one);
	to_fahrenheit(&celsius);
	
	cout << "value after doubling: " << num << endl;
	cout << "value after doubling: " << five << endl;
	cout << "value after tripling: " << ten << endl;
	cout << "value after tripling: " << one << endl;
	cout << "converting 0C to F: " << celsius << endl;
	
    return 0;
}


void double_it(int *p) {
	*p = *p * 2;
}


void triple_it(int *z) {
	*z = *z * 3;
}


void to_fahrenheit(int *f) {
	*f = (*f * 1.8) + 32;
}
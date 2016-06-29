//
//  main.cpp
//  greatest_common_factors
//
//  Created by Jon Reiter on 6/1/16.
//  Copyright © 2016 Jon Reiter. All rights reserved.
//

#include <iostream>
#include <cstdlib>

using namespace std;


int gcf(int a, int b);


int main() {
	int a = 0, b = 0;	// Inputs to GCF
	
	cout << "Enter a: ";
	cin >> a;
	cout << "Enter b: ";
	cin >> b;
	cout << "GCF is " << gcf(a, b) << endl;
	
    return 0;
}


int gcf(int a, int b) {
	if (b == 0) {
		return a;
	}
	else {
		return gcf(b, a%b);
	}
}
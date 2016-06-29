//
//  main.cpp
//  get_number
//
//  Rev: 1
//  Created by Jonathan Reiter on 6/8/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cmath>
#include <cstdlib>

using namespace std;


// declare functions here
double get_num();


int main() {

    double x = 0.0;
    
    while (true) {
        cout << "Enter a number: (0) ";
        
        // call functions here
        x = get_num();
        if (x == 0.0) {
            break;
        }
        
        cout << "Square root is: " << sqrt(x) << endl;
    }
    
    
    return 0;
}


// define functions here
double get_num() {
    char s[100];                // declare string var s with size of 100
    
    cin.getline(s, 100);        // get the entire line of user input max of 100
    if (strlen(s) == 0) {       // if user enters nothing then default val of 100
        return 0.0;
    }
    
    return atof(s);             // takes the string input and makes a double val; atoi makes int val
}

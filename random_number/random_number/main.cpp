//
//  main.cpp
//  random_number
//
//  Created by Jonathan Reiter on 6/3/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


// declare functions here
int random_num(int n);

int main() {

    int n = 0;
    int r = 0;
    
    srand(time(nullptr));               // set seed for randomizing
    
    cout << "enter number of dice to roll: ";
    cin >> n;
    
    for (int i = 1; i <= n; i++) {
        r = random_num(6) + 1;          // grab a number from 1 - 6
        
        cout << r << " ";
    }
    
    return 0;
}



// define functions here
int random_num(int n) {
    return rand() % n;
}
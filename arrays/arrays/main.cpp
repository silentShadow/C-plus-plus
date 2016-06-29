//
//  main.cpp
//  arrays
//
//  Created by Jonathan Reiter on 6/3/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>

using namespace std;



int main() {

    // declare scores array of type double; 5 offsets
    double scores[5];
    
    // declare var to hold sum of array offsets
    double sums = 0;
    
    // get user-driven array values
    for (int i = 0; i < 5; i++) {
        cout << "enter value for offset " << i << ": ";
        cin >> scores[i];
    }
    
    // print out every item of the scores array and it's offset
    for (int i = 0; i < 5; i++) {
        cout << i << ") " << scores[i] << " ";
        sums += scores[i];
        
    }
    
    cout << endl << "sum of array offsets is: " << sums << endl;
    
    return 0;
}

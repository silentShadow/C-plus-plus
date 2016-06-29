//
//  main.cpp
//  string_token
//
//  Rev: 1
//  Created by Jonathan Reiter on 6/8/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>
#include <cstring>

using namespace std;


int main() {

    char the_string[81], *p;
    
    cout << "Enter strings comma delimited:  ";
    cin.getline(the_string, 81);                    // read the entire line
    
    p = strtok(the_string, ", ");                   // grab the first token at first occurrence of ','
    
    while (p != nullptr) {                          // until the NUL terminator is reached keeping looping
        cout << p << endl;
        p = strtok(nullptr, ", ");
    }
    
    return 0;
}



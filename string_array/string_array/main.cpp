//
//  main.cpp
//  string_array
//
//  Created by Jonathan Reiter on 6/3/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


int main() {

    string members[] = {"Jonny", "Paul", "Ben", "Ringo"};
    
    for (int i = 0; i < 4; i++) {
        cout << members[i] << " " << endl;
    }
    
    return 0;
}

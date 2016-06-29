//
//  main.cpp
//  convert_upper
//
//  Rev: 1
//  Created by Jonathan Reiter on 6/8/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>
#include <cstring>
#include <cctype>           // this gives us functions like toupper(c) and tolower(c)

using namespace std;

// declare functions here
void convert_upper(char *s);

int main() {
    
    char s[100];
    
    cout << "Enter a string to convert: ";
    cin.getline(s, 100);
    
    // call functions here
    convert_upper(s);
    cout << "The converted string is: " << endl;
    cout << s << endl;

    return 0;
}


void convert_upper(char *s) {
    int length = strlen(s);
    
    for (int i = 0; i < length; i++) {
        s[i] = toupper(s[i]);
    }
}
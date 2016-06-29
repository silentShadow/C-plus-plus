//
//  main.cpp
//  string_playing
//
//  Rev: 1
//  Created by Jonathan Reiter on 6/8/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>
#include <cstring>
#define STRMAX 300

using namespace std;

int main() {
    
    //char s[20];
    char str[STRMAX];
    char name[100];
    char addr[200];
    char work[200];
    
    /*
    strcpy(s, "one");
    cout << s << endl;
    
    strcat(s, "two");
    cout << s << endl;
    
    strcat(s, "three");
    cout << s << endl << endl;
    */
    
    cout << "Enter your name: ";
    cin.getline(name, 100);
    
    cout << "Enter address: ";
    cin.getline(addr, 200);
    
    cout << "Enter workplace: ";
    cin.getline(work, 200);
    
    strncpy(str, "\nHello, ", STRMAX);
    strncat(str, name, STRMAX - strlen(name));
    strncat(str, ", your address is ", STRMAX);
    strncat(str, addr, STRMAX - strlen(addr));
    strncat(str, ",\nand you work at ", STRMAX);
    strncat(str, work, STRMAX - strlen(work));
    strcat(str, ".");
    
    cout << str << endl;

    return 0;
}

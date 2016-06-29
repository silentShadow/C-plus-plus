//
//  main.cpp
//  zero_out
//
//  Rev: 1
//  Created by Jonathan Reiter on 6/6/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>

using namespace std;

void zero_out(int *arr, int n);

int a[10] = {1,2,3,4,5,6,7,8,9,10};
int *p;

int main() {

    zero_out(a, 10);
    
    for (int i = 0; i < 10; i++) {
        cout << a[i] << " ";
    }
    
    return 0;
}


void zero_out(int *arr, int n) {
    while (n-- > 0) {
        *p++ = 0;
    }
}
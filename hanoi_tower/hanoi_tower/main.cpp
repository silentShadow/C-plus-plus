//
//  main.cpp
//  hanoi_tower
//
//  Created by Jon Reiter on 6/2/16.
//  Copyright © 2016 Jon Reiter. All rights reserved.
//

#include <iostream>
using namespace std;


// delcare functions here
void move_ring(int n, int src, int dst, int other);
void move_a_ring(int src, int dst);


int main() {
    
    int n = 3;                  // make the stack 3 rings high
    
    
    // call functions
    move_ring(n, 1, 3, 2);      // move stack 1 to stack 3
    
    
    return 0;
}


// define functions here
void move_ring(int n, int src, int dst, int other) {
    if (n == 1) {
        move_a_ring(src, dst);
    }
    else {
        move_ring(n - 1, src, other, dst);
        move_a_ring(src, dst);
        move_ring(n - 1, other, dst, src);
    }
}


void move_a_ring(int src, int dst) {
    cout << "Move from " << src << " to " << dst << endl;
}
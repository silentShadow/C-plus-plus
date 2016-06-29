//
//  main.cpp
//  dealer
//
//  Rev: 1
//  Created by Jonathan Reiter on 6/3/16.
//  Copyright © 2016 Jonathan Reiter. All rights reserved.
//

#include <iostream>
#include <string>       // for the string class
#include <cstdlib>      // for randomizing
#include <ctime>        // for time

using namespace std;


int deck[52];           // array deck of type int size 52


string card_names[] = {"A","2","3","4","5","6","7","8","9","10","J","Q","K"};       // array of all cards for one suite


void swap_cards(int i, int j);
int random_num(int x);


int main() {

    
    srand(time(nullptr));
    
    // initialize the deck
    for (int i = 0; i < 52; i++) {      // from 0 - 52, fill the deck array
        deck[i] = i;
    }
    
    // shuffle the deck
    for (int i = 51; i > 0; i--) {
        int j = random_num(i);          // grab a random number 0 - 51
        swap_cards(i, j);               // send in the last array offset and the random number and swap them
    }
    
    // deal out 5 cards
    for (int i = 0; i < 5; i++) {
        int j = deck[i] % 13;           // at offset i mod 13 grab that offset from card_names array; 0 - 12
        cout << card_names[j] << " ";
    }
    
    cout << endl;
    
    return 0;
}


void swap_cards(int i, int j) {
    int temp = deck[i];
    deck[i] = deck[j];
    deck[j] = temp;
}


int random_num(int x) {
    return rand() % (x + 1);
}

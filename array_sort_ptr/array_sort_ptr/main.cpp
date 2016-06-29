//
//  main.cpp
//  array_sort_ptr
//
//	Rev: 1
//  Created by Jon Reiter on 6/3/16.
//  Copyright © 2016 Jon Reiter. All rights reserved.
//

#include <iostream>
#include <stdlib.h>

using namespace std;

void sort(int n);
void swaps(int *p, int *p1);

int scores[6] = {90, 100, 85, 72, 89, 98};

int main() {
	
	cout << scores << endl << endl;
	
	sort(10);
	
	for (int i = 0; i < 10; i++) {
		cout << scores[i] << " ";
	}

    return 0;
}


void sort(int n) {
	int lowest = 0;
	
	for (int i = 0; i < n - 1; i++) {
		lowest = i;
		for (int j = i + 1; j < n; j++) {
			if (scores[j] < scores[lowest]) {
				lowest = j;
			}
		}
		if (1 != lowest) {
			swaps(&scores[i], &scores[lowest]);
		}
	}
}


void swaps(int *p, int *p1) {
	int temp = *p;
	*p = *p1;
	*p1 = temp;
}

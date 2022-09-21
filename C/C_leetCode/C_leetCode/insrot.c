#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int* insrot(int* a,int len) {
	int key;
	int j;
	for (int i = 1; i < len; i++) {
		key = a[i];
		for (j = i - 1; j >= 0; j--) {
			if (key < a[j]) {
				a[j + 1] = a[j];
			}
			else {
				break;
			}
		}
		a[j+1] = key;
	}
	for (int i = 0; i < len; i++) {
		printf("%d", a[i]);
	}
}	

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int* buble(int* a, int len) {
	int temp = 0;
	for (int i = len - 1; i > 0; i--) {
		for (int j = 0; j < i; j++) {
			if (a[j] > a[j + 1]) {
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
				for (int i = 0; i < len; i++) {
					printf("%d", a[i]);
				}
				printf("\n");
			}
			else {
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%d", a[i]);
	}
}



/*
* 버블정렬 구현 하였습니다.
*/
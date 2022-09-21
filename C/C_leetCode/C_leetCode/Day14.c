#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int masdfasdfasdfn() {
	int a;
	scanf_s("%d", &a);
	int* num = (malloc(sizeof(int)*a));
	for (int i = 0; i < a; i++) {
		num[i] = (1 + i) * 100;
		printf("%d", num[i]);
	}
	free(num);
}
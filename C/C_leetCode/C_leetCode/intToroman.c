#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* intToRoman(int num) {
	int index = 0;
	int m = num;
	char* rs[]={"\0"};
	char* roman[] = { "M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I" };
	int in[] = { 1000,900,500,400,100,90,50,40,10,9,5,4,1 };
	for (int i = 0; i < 13; i++) {
		int nrs = m / in[i];
		m %= in[i];
	}
}
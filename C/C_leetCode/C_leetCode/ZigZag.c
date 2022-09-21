#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum state {
	down = 0,
	up = 1
} st;

char* convert(char* s, int numRows) {
	int len = strlen(s);
	int bf = 0;
	int bs = 0;

	if (strlen(s) <= 1 || numRows == 1) {
		return s;
	}
	else{
	char* res = (char*)malloc(len * sizeof(char*));
	memset(res, 0, len * sizeof(char*));
	char** b = (char**)malloc(numRows * sizeof(char**));
	for (int i = 0; i < numRows; i++) {
		b[i] = (char*)malloc(len/ 2 * sizeof(char*));
		memset(b[i], 0, len/ 2 * sizeof(char*));
	}
	st state = down;
	for (int i = 0; i < len; i++) {
		b[bf][bs] = s[i];
		switch (state){
		case down:
			bf++;
			if (bf >= numRows) {
				bf--;
				bf--;
				bs++;
				state = up;
			}
			break;
		case up:
			bf--;
			bs++;
			if (bf < 0) {	
				bf++;
				bf++;
				bs--;
				state = down;
			}
			break;
		}
	}
	int re = 0;
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j <= len / 2; j++) {	
			if (b[i][j] != 0) {
				res[re++] = b[i][j];
			}
		}
	}
	printf("%s \n", res);
	return res;
	}
}
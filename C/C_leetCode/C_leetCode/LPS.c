#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* longestPalindrome(char* s) {
	int mxlen = 1;
	int start = 0;
	for (int i = 0; i < strlen(s); i++) {
		for (int j = strlen(s); j >= i; j--) {
			if (mxlen < (j - i + 1)) {
				if (s[i] == s[j]) {
					int a = i + j;
					for (int k = i; k <= a / 2; k++) {
						if (s[k] != s[a - k]) { //°Ë»ç
							goto ex;
						}
					}
					if (mxlen < (j - i + 1)) {
						mxlen = j - i + 1;
						start = i;
					}
				}
			}
		ex:;
		}
	}
	char* rs = malloc(mxlen + 1);
	memcpy(rs, &s[start], mxlen);
	rs[mxlen] = 0x00;
	printf("%s", rs);
}

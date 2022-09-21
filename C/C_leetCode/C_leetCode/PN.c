#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

bool isPalindrome(int x) {
	int len = 10;
	if (x == 0) {
		return true;
	}
	while (x / (int)pow(10, len) == 0) len--;
	if (x < 0) {
		return false;
	}
	else {
		if (len > 1) {
			for (int i = 0; i <= len / 2; i++) {
				if (x % (int)pow(10,(i + 1)) / (int)pow(10, i) != x % (int)pow(10,(len - i + 1)) / (int)pow(10, len - i)) return false;
			}
			printf("%d", 1);
			return true;
		}
		else if (len == 1) {
			if (x / 10 != x % 10) return false;
			else return true;
		}
		else {
			return true;
		}
	}
}
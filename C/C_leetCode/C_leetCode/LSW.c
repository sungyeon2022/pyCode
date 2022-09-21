#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lengthOfLongestSubstring(char* s) {
	int max = 1;
	if (strlen(s)==0) {
		return 1;
	}
	else {
		for (int i = 0; i < strlen(s) - 1; i++) {
			int index = 1;
			for (int j = i + 1; j < strlen(s); j++) {
				for (int k = i; k < j; k++) {
					if (s[j] == s[k]) {
						goto out;
					}
				}
				index++;
			}
		out:
			if (max < index) {
				max = index;
			}
		}
	}
	return max;
}
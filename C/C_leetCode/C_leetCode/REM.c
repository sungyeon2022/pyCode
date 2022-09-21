#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <stdbool.h>

bool isMatch(char* s, char* p) {
	while (*s && *p) {
		printf("%c", *s);
		printf("%c", *p);
		s++;
		p++;
	}
}
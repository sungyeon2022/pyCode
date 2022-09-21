#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int mn() {
	int sa[3]={22,24,23};
	char* sn[] = {"조성연","김성연","정성연"};
	for (int i = 0; i < 3; i++) {
		printf("%d", sa[i]);
		printf("%s", sn[i]);
	}
}
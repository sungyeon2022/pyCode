#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int temp=0;
int part(int a[], int left, int right) {
	int piv = left;
	int i = left+1, j = right;
	while (i < j) {
		while (a[piv] > a[i] && i <= right) {
			i++;
		}
		while (a[piv] < a[j]&&j>=left) {
			j--;
		}
		if (i < j) {
			swap(&a[i], &a[j]);
		}
	}
	swap(&a[piv], &a[j]);
	return j;
}

void myqsort(int a[], int left, int right) {
	if (left < right) {
		int q = part(a, left, right);
		myqsort(a, left, q - 1); //ºÐÇÒ
		myqsort(a, q + 1, right);
	}
}

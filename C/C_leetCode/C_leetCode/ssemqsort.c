#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

void swap(int* a, int* b) {
	int temp = *b;
	*b = *a;
	*a = temp;
}

void upqsort(int a[], int start, int end) {
	if (start >= end) return;
	int piv = start;
	int le = start + 1;
	int ri = end;
	while (le <= ri) {
		while (a[le] <= a[piv] && le <= end) {
			le++;
		}
		while (a[ri] > a[piv]&&ri>=start) {
			ri--;
		}
		if (le < ri) {
			swap(&a[le], &a[ri]);
			le++;
			ri--;
		}
	}
	swap(&a[ri], &a[piv]);
	upqsort(a, start, ri - 1);
	upqsort(a, ri + 1, end);
}

void dnqsort(int a[], int start, int end) {
	if (start >= end) return;
	int piv = start;
	int le = start + 1;
	int ri = end;
	while (le <= ri) {
		while (a[le] >= a[piv] && le <= end) {
			le++;
		}
		while (a[ri] < a[piv] && ri >= start) {
			ri--;
		}
		if (le < ri) {
			swap(&a[le], &a[ri]);
			le++;
			ri--;
		}
	}
	swap(&a[ri], &a[piv]);
	dnqsort(a, start, ri - 1);
	dnqsort(a, ri + 1, end);
}
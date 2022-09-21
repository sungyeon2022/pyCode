#include <stdio.h>
#include <stdlib.h>
#include <string.h>	

int smsq(int** sizes, size_t sizes_rows, size_t sizes_cols) {
    int with = 0, hi = 0, temp;
    for (int i = 0; i < sizes_rows; i++) {
        if (sizes[i][0] < sizes[i][1]) {
            temp = sizes[i][0];
            sizes[i][0] = sizes[i][1];
            sizes[i][1] = temp;
        }
        if (sizes[i][0] > with) with = sizes[i][0];
        if (sizes[i][1] > hi) hi = sizes[i][0];
    }
    int answer = with*hi;
    return answer;
}
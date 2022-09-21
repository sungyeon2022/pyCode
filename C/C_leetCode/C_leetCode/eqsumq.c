#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

long sum(int a[], int alen) {
    long sum = 0;
    for (int i = 0; i < alen; i++) {
        sum += a[i];
    }
    return sum;
}

// queue1_len은 배열 queue1의 길이입니다.
// queue2_len은 배열 queue2의 길이입니다.
int eqsumq(int queue1[], size_t queue1_len, int queue2[], size_t queue2_len) {
    int* q = (int*)malloc((queue1_len+queue2_len)*sizeof(int));
    int answer = 0;
    long res;
    int temp;
    for (int i = 0; i < queue1_len + queue2_len ; i++) {
        if (i < queue1_len) {
            q[i] = queue1[i];
        }
        else {
            q[i] = queue2[i - queue1_len];
        }
    }
    int qs = 0;
    int qend = queue1_len + queue2_len;
    int qlend = qend / 2;
    long qlsum = sum(queue1, queue1_len);
    long qsum = qlsum + sum(queue2, queue2_len);
    if (qsum % 2 == 1) return -1;
    else {
        res = qsum / 2;
    }
    while (1) {
        if (answer > queue1_len + queue2_len + 2) return -1;
        if (qlsum > res) {
            temp = q[qs];
            qlsum -= temp;
            qs++;
            q[qend] = temp;
            qend++;
            answer++;
        }
        else if (qlsum < res) {
            qlsum += q[qlend];
            qlend++;
            answer++;
        }
        else break;
    }
    return answer;
}
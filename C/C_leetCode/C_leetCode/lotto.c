#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len�� �迭 lottos�� �����Դϴ�.
// win_nums_len�� �迭 win_nums�� �����Դϴ�.
int* lotto(int lo[], size_t lolen, int win[], size_t winlen) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* answer = (int*)calloc(2,sizeof(int));
    for (int i = 0; i < lolen; i++) {
        for (int j = 0; j < winlen; j++) {
           
            if (lo[i] == win[j]) {
                answer[1]++;
                win[j] = -1;
            }
        }
        if (lo[i] == 0) {
            answer[0]++;
        }
    }
    answer[0] += answer[1];
    for (int i = 0; i < 2; i++) {
        if (answer[i] > 1) answer[i] = 6 - answer[i] + 1;
        else answer[i] = 6;
    }
    return answer;
}
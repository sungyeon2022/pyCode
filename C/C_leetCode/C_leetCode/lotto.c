#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// lottos_len은 배열 lottos의 길이입니다.
// win_nums_len은 배열 win_nums의 길이입니다.
int* lotto(int lo[], size_t lolen, int win[], size_t winlen) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
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
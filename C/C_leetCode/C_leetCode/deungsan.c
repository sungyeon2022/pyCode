#include <stdio.h>
#include <stdlib.h>
#include <string.h>	
#include <stdbool.h>

// paths_rows는 2차원 배열 paths의 행 길이, paths_cols는 2차원 배열 paths의 열 길이입니다.
// gates_len은 배열 gates의 길이입니다.
// summits_len은 배열 summits의 길이입니다.
int* san(int n, int** paths, size_t paths_rows, size_t paths_cols, int gates[], size_t gates_len, int summits[], size_t summits_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* suminten = calloc(summits_len*gates_len, sizeof(int));
    int mlo = 0;
    int ins = 10000001;
    int* answer = (int*)malloc(2);
    for (int i = 0; i < gates_len; i++) {
        for (int j = 0; j < summits_len; j++) {
            mlo = gates[i];
            while (1) {
                for (int k = 0; k < paths_rows; k++) {

                }
            }
        }
    }
    return answer;
}
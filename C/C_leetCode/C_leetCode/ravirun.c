#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// roads_rows는 2차원 배열 roads의 행 길이, roads_cols는 2차원 배열 roads의 열 길이입니다.
// traps_len은 배열 traps의 길이입니다.
int soon(int n, int start, int end, int** ro, size_t ro_r, size_t ro_c, int traps[], size_t traps_len) {
    int answer = 0;
    int min = 0;
    int tmid, me;
    int ind = start;
    while (ind == end) {
        bool tpch = false;
        me = start;
        tmid = 0;
        while (me == end) {
            for (int i = 0; i < ro_r; i++) {

            }
        }
    }

    return answer;
}
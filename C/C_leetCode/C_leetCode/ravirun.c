#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// roads_rows�� 2���� �迭 roads�� �� ����, roads_cols�� 2���� �迭 roads�� �� �����Դϴ�.
// traps_len�� �迭 traps�� �����Դϴ�.
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
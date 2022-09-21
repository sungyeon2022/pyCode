#include <stdio.h>
#include <string.h>	
#include <stdbool.h>
#include <stdlib.h>

// survey_len�� �迭 survey�� �����Դϴ�.
// choices_len�� �迭 choices�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
char* sungyouhyung(const char* survey[], size_t survey_len, int choices[], size_t choices_len) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
    int* res = calloc(4,sizeof(int));
    char* answer = (char*)malloc(5);
    for (int i = 0; i < survey_len; i++) {
        int ch = choices[i];
        if (survey[i][0] == 'R') {
            res[0] -= ch - 4;
        }
        else if (survey[i][0] == 'T') {
            res[0] += ch - 4;
        }
        else if (survey[i][0] == 'C') {
            res[1] -= ch - 4;
        }
        else if (survey[i][0] == 'F') {
            res[1] += ch - 4;
        }
        else if (survey[i][0] == 'J') {
            res[2] -= ch - 4;
        }
        else if (survey[i][0] == 'M') {
            res[2] += ch - 4;
        }
        else if (survey[i][0] == 'A') {
            res[3] -= ch - 4;
        }
        else if (survey[i][0] == 'N') {
            res[3] += ch - 4;
        }
    }
    if (res[0] >= 0) {
        answer[0] = 'R';
    }
    else if (res[0] < 0) {
        answer[0] = 'T';
    }
    if (res[1] >= 0) {
        answer[1] = 'C';
    }
    else if (res[1] < 0) {
        answer[1] = 'F';
    }
    if (res[2] >= 0) {
        answer[2] = 'J';
    }
    else if (res[2] < 0) {
        answer[2] = 'M';
    }
    if (res[3] >= 0) {
        answer[3] = 'A';
    }
    else if (res[3] < 0) {
        answer[3] = 'N';
    }
    answer[4] = '\0';
    return answer;
}

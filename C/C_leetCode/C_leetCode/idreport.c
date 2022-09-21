#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int arr[1000][1000];
int cnt[1000];
// id_list_len은 배열 id_list의 길이입니다.
// report_len은 배열 report의 길이입니다.
// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer = (int*)calloc(id_list_len, sizeof(int*));
    char* repo,*reported, text[21];
    for (int i = 0; i < report_len; i++) {
        strcpy(text,report[i]);
        repo = strtok(text, " ");
        reported = strtok(NULL, " ");
        for (int j = 0; j < id_list_len; j++) {
            if (strcmp(repo, id_list[j]) == 0) {
                for (int k = 0; k < id_list_len; k++) {
                    if (strcmp(reported, id_list[k]) == 0) {
                        if (arr[j][k] == 0) {
                            arr[j][k] = 1;
                            cnt[k]++;
                        }
                        break;
                    }
                }
                break;
            }
        }
    }
    for (int i = 0; i < id_list_len; i++) {
        if (cnt[i] >= k) {
            for (int j = 0; j < id_list_len; j++) {  
                if (arr[j][i] == 1) {
                    answer[j]++;
                }
            }
        }
    }
    return answer;
}
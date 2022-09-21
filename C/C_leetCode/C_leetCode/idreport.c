#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


int arr[1000][1000];
int cnt[1000];
// id_list_len�� �迭 id_list�� �����Դϴ�.
// report_len�� �迭 report�� �����Դϴ�.
// �Ķ���ͷ� �־����� ���ڿ��� const�� �־����ϴ�. �����Ϸ��� ���ڿ��� �����ؼ� ����ϼ���.
int* solution(const char* id_list[], size_t id_list_len, const char* report[], size_t report_len, int k) {
    // return ���� malloc �� ���� �Ҵ��� ������ּ���. �Ҵ� ���̴� ��Ȳ�� �°� �������ּ���.
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
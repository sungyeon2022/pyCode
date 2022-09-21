#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
int sttoint(const char* s) {
    char num[10][10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int answer = 0;
    int ind;
    for (int i = 0; i < strlen(s); i++) {
        bool ck = false;
        ind = i;
        if (s[i] >= 48 && s[i] <= 57) {
            answer = answer * 10 + s[i] - 48;
        }
        else {
            for (int j = 0; j < 10; j++) {
                int k = 0;
                i = ind;
                while (true) {
                    if (num[j][k] != s[i]) break;
                    num[j][k++];
                    if (num[j][k] == '\0') {
                        ck = true;
                        break;
                    }
                    i++;
                }
                if (ck == true) {
                    answer = answer * 10 + j;
                    break;
                }
            }
        }
    }
    printf("%d", answer);
    return answer;
}

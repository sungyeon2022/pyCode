#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* 가위바위보 게임
* 가위 = 1, 바위 = 2,보 = 3 
* 입력 값 = 컴퓨터 : 2, 나 : 2
* 출력 값 = 비겼습니다.
* "나" 가 이길때까지
*/

int main() {
	int a=0;
	int b=0;
	while (1 == 1) {
		printf("가위바위보 게임입니다. 가위:1, 바위:2, 보:3 \n");
		printf("컴퓨터 : ");
		scanf_s("%d", &a);
		printf("나 : ");
		scanf_s("%d", &b);
		if (a - b == 2) {
			printf("이겼습니다.");
			break;
		}
		else if (a - b == 1) {
			printf("패배했습니다.");
		}
		else if (a - b == 0) {
			printf("비겼습니다.");
		}
		else if (a - b == -2) {
			printf("패배했습니다.");
		}
		else if (a - b == -1) {
			printf("이겼습니다.");
			break;
		}
	}
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
*업무 1. 잔액 조회, 2. 출금, 3. 입금, 4. 종료,
* ex) 입력 : 2 출금하실 금액을 입력해주세요
* 입력 : 5000 잔액있을시, 출금되었습니다.
*			  잔액부족시, 잔액이 부족합니다.
* 입력 : 3 입금하실 금액을 입력해주세요.
*입력 :
* 사용자가 4를 입력할 때 까지 계속
* 잔액 5000시작
* 입력 음수 불가능
* 출력 음수 불가능
*/

int msdfdfn() {
	int jango = 5000;
	int a;
	int chul;
	int ip;
	
	while (1) {
		printf("원하시는 업무를 선택해 주십시오. \n 1. 잔액 조회, 2. 출금, 3. 입금, 4. 종료 \n");
		scanf_s("%d", &a);
		if (a == 1) {
			printf("고객님의 계좌 잔액은 %d원입니다. \n", jango);
		}
		else if (a == 2) {
			er: //출금 금액이 음수이거나 잔고보다 많은 금액일경우 돌아올 위치입니다.
			printf("출금하실 금액을 입력해 주십시오.\n* 금액이 0보다 작거나 잔액 이상이면 불가능합니다. \n");
			scanf_s("%d", &chul);
			if (chul > jango || chul < 0) {
				printf("처리할수 없는 금액입니다. \n 다시입력해 주십시오. \n");
				goto er; // 확인하고 돌려보냅니다.
			}
			jango -= chul;
			printf("%d원 출금이 완료되었습니다. \n남은 잔액은 %d원입니다.", chul, jango);
		}
		else if (a == 3) {
			ip: // 입금에서 입력이 음수일 경우 돌아올 위치입니다.
			printf("입금하실 금액을 입력해 주십시오.\n* 0이하의 금액은 불가능합니다. \n");
			scanf_s("%d", &ip);
			if (ip < 0) {
				printf("처리할수 없는 금액입니다. \n 다시입력해 주십시오. \n");
				goto ip; //입력된 입금값이 음수인지 확인하고 음수일 경우 돌려 보냅니다.
			}
			jango += ip;
			printf("%d원 입금이 완료되었습니다. \n남은 잔액은 %d원입니다.", ip, jango);
		}
		else if (a == 4) {
			printf("프로그램을 종료하겠습니다.");
			break;		
		}
		else {
			printf("처리할수없는 업무입니다. 다시입력해주세요.\n");		
		}
	}
}		
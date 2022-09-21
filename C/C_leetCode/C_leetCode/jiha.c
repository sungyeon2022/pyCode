#include <stdio.h>
#include <string.h>

static char* yuck = { "abcdefghij" };
static int time[] = { 2,3,2,1,2,2,3,3,1 };//시간을 도저히 처리할 방법이 떠오르질 않습니다.

int indexof(char* str,char find) {
	int res = 0;
	while (str[res]!=find) {
		res++;
		if (res > strlen(str)) return -1;
	}
	return res;
}

int jiha(char start,char end) {
	int timeind = 0;
	int startnum = indexof(yuck, start);
	int endnum = indexof(yuck, end);
	if (startnum > endnum) {
		int temp = endnum;
		endnum = startnum;
		startnum = temp;
	}
	int chai = endnum - startnum;
	int moneyind = chai > 3 ? (chai-3) * 10 + 400 : 400;
	int i = startnum;
	while (i < endnum) {
		timeind += time[i];
		i++;
	}
	printf("경과 시간 : %d \n", timeind);
	printf("비용 : %d \n", moneyind);
}

int maisdfsdfsdfsdfsdfsdfn() {
	char a;
	char b;
	while (1) {
		printf("출발역과 도착역을 입력해주세요. \n");
		printf("시작역 : ");
		scanf_s("%c", &a, 1);
		rewind(stdin);
		printf("도착역 : ");
		scanf_s("%c", &b, 1);
		rewind(stdin);
		int anum = indexof(yuck, a);
		int bnum = indexof(yuck, b);
		int chai = anum - bnum;
		if (anum != -1 && bnum != -1) {
			if (chai == 0) printf("출발역과 도착역이 같을 수 없습니다. 다시 입력해주세요. \n");
			else jiha(a, b);
		}
		else printf("존재하지 않는 역입니다. 다시 입력해주세요. \n");
	}
}

/*
* 경과 시간의 경우 a,b,c 역을 경우할 경우 시작이 0 종료가 2가됩니다.
* 여기서 제가 만들어놓은 time배열을 확인하면 0번째가 a부터 b역 1번째가 b부터 c역입니다.
* 결과값은 time 배열의 0번째와 1번째 값을 더하면 경과시간이 나옵니다.
* 결국 시작 번호 부터 (종료 번호 - 1)까지의 time 배열 값을 더하면 최종 경과 시간이 나오게 됩니다.
* 혹시 경과 시간을 배열 이용안하고 가능할지 고민해 보았지만 규칙성이 없어 힘들것 같아 이렇게 해결하였습니다.
* 
* 
* 비용의 경우 4개 이하이면 400원 초과일 경우 (시작번호와 끝번호의 차이 - 3)*10+400 이기 때문에 간단하게 표시했습니다.
* 
* 
* 반례의 경우 역이 두개만 존재하는 경우가 문제가 되지않을까 생각이 들어 확인한 결과 이상없습니다.
* 추가로 역의 입력에서 발생하는 오류는 main 에서 처리하는게 더 깔끔할것 같다고 생각이 들어 
*  main 에서 처리하였습니다.
* 추가로 역을 반대로 가는 경우는 출발역과 도착역을 바꿔서 해결하였습니다.
* 
* 부족한 부분이나 다른 방식도 있다면 부탁드리겠습니다.
* 
* scnaf_s로 입력 받을 경우 표준입력 버퍼에 잔여 문자가 남아 rewind(stdin)으로 정리하고 다시 입력받는 식으로 해결하였습니다.
*/
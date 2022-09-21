#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {
	int stack[5];
	int size;

}Stack;

init(Stack* a) {
	a->size = 0;
}
push(Stack* a, int b) {
	if (a->size >= 5) {
		printf("스택이 가득찼습니다.");
		return -1;
	}
	else if (a->size < 5) {
		a->stack[a->size] = b;
		a->size++;
		return 0;
	}
	else {
		printf("Size가 스택 범위를 벗어났거나, 스택 초기화가 안되어있을 수 있습니다.");
		return -1;
	}
}
pop(Stack* a) {
	if (a->size == 0) {
		printf("스택이 비었습니다.");
		return -1;
	}
	else if(a->size > 0) {
		a->size--;
		return 0;
	}
	else {
		printf("Size가 스택 범위를 벗어났거나, 스택 초기화가 안되어있을 수 있습니다.");
		return -1;
	}
}
isEmpty(Stack a) {
	if (a.size == 0) {
		return true;/*<stdbool.h>이용시, 아닐경우는 1 */
	}
	else if (a.size > 0&&a.size<=5) {
		return false;/*위와 동일, 이 경우는 0반환 */
	}
	else {
		printf("Size가 스택 범위를 벗어났거나, 스택 초기화가 안되어있을 수 있습니다.");
		return -1;
	}
}
isFull(Stack a) {
	if (a.size == 5) {
		return 1; /* isEmpty 반환의 반대입니다. */
	}
	else if (a.size < 5 && a.size >= 0) {
		return 0;
	}
	else {
		printf("Size가 스택 범위를 벗어났거나, 스택 초기화가 안되어있을 수 있습니다.");
		return -1;
	}
}
peek(Stack a) {
	if (a.size > 0 && a.size <= 5) {
		printf("%d", (a.stack[a.size-1]));
		return 0;
	}
	else if(a.size==0) {
		printf("스택이 비어있습니다.");
		return -1;
	}
	else {
		printf("Size가 스택 범위를 벗어났거나, 스택 초기화가 안되어있을 수 있습니다.");
		return -1;
	}
}
display(Stack a) {
	if (a.size > 0 && a.size <= 5) {
		for (int i = 0; i < a.size; i++) {
			printf("%d번째 값 : %d \n", i + 1, a.stack[i]);
		}
		return 0;
	}
	else if (a.size == 0) {
		printf("스택이 비어있습니다.");
		return -1;
	}
	else {
		printf("Size가 스택 범위를 벗어났거나, 스택 초기화가 안되어있을 수 있습니다.");
		return -1;
	}
}


int masdasdasdasn() {
	Stack S;
	init(&S);
	push(&S, 7);
	push(&S, 7);
	push(&S, 7);
	push(&S, 7);
	push(&S, 7);
	pop(&S);
	printf("%d \n", isFull(S));
	printf("%d \n", isEmpty(S));
	display(S);
	peek(S);
}
/*
* 값의 추가나 변경이 아니라 불러오거나 출력하는 경우는 &안써도 가능할 것 같아 &빼고 만들었습니다.
* 혹시 값을 확인하거나 출력하는 경우도 &를 사용해야 하는지 궁금합니다.
* 
* 그리고 제가 각 조건에서 실행이 정상적으로 진행되지 않는 경우 -1을 반환해야 한다고 알고있어서 넣었습니다.
* 혹시 이 부분도 return 0 처럼 필수 가 아닌지 궁금합니다.
* 
* <stdbool.h>같은 경우는 제가 1,0 말고도 true 나 false 를 반환할 수 있나 찾아보다 알게 되어 추가했습니다.
* 
* 각 if 문의 else의 경우는 혹시 있을지 모를 애러에 대비해 넣어두었습니다.
* 
* 혹시 부족한 부분이나 문제 점이 있다면 메일에 남겨주시면 감사하겠습니다. 
*/
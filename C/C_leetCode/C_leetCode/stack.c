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
		printf("������ ����á���ϴ�.");
		return -1;
	}
	else if (a->size < 5) {
		a->stack[a->size] = b;
		a->size++;
		return 0;
	}
	else {
		printf("Size�� ���� ������ ����ų�, ���� �ʱ�ȭ�� �ȵǾ����� �� �ֽ��ϴ�.");
		return -1;
	}
}
pop(Stack* a) {
	if (a->size == 0) {
		printf("������ ������ϴ�.");
		return -1;
	}
	else if(a->size > 0) {
		a->size--;
		return 0;
	}
	else {
		printf("Size�� ���� ������ ����ų�, ���� �ʱ�ȭ�� �ȵǾ����� �� �ֽ��ϴ�.");
		return -1;
	}
}
isEmpty(Stack a) {
	if (a.size == 0) {
		return true;/*<stdbool.h>�̿��, �ƴҰ��� 1 */
	}
	else if (a.size > 0&&a.size<=5) {
		return false;/*���� ����, �� ���� 0��ȯ */
	}
	else {
		printf("Size�� ���� ������ ����ų�, ���� �ʱ�ȭ�� �ȵǾ����� �� �ֽ��ϴ�.");
		return -1;
	}
}
isFull(Stack a) {
	if (a.size == 5) {
		return 1; /* isEmpty ��ȯ�� �ݴ��Դϴ�. */
	}
	else if (a.size < 5 && a.size >= 0) {
		return 0;
	}
	else {
		printf("Size�� ���� ������ ����ų�, ���� �ʱ�ȭ�� �ȵǾ����� �� �ֽ��ϴ�.");
		return -1;
	}
}
peek(Stack a) {
	if (a.size > 0 && a.size <= 5) {
		printf("%d", (a.stack[a.size-1]));
		return 0;
	}
	else if(a.size==0) {
		printf("������ ����ֽ��ϴ�.");
		return -1;
	}
	else {
		printf("Size�� ���� ������ ����ų�, ���� �ʱ�ȭ�� �ȵǾ����� �� �ֽ��ϴ�.");
		return -1;
	}
}
display(Stack a) {
	if (a.size > 0 && a.size <= 5) {
		for (int i = 0; i < a.size; i++) {
			printf("%d��° �� : %d \n", i + 1, a.stack[i]);
		}
		return 0;
	}
	else if (a.size == 0) {
		printf("������ ����ֽ��ϴ�.");
		return -1;
	}
	else {
		printf("Size�� ���� ������ ����ų�, ���� �ʱ�ȭ�� �ȵǾ����� �� �ֽ��ϴ�.");
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
* ���� �߰��� ������ �ƴ϶� �ҷ����ų� ����ϴ� ���� &�Ƚᵵ ������ �� ���� &���� ��������ϴ�.
* Ȥ�� ���� Ȯ���ϰų� ����ϴ� ��쵵 &�� ����ؾ� �ϴ��� �ñ��մϴ�.
* 
* �׸��� ���� �� ���ǿ��� ������ ���������� ������� �ʴ� ��� -1�� ��ȯ�ؾ� �Ѵٰ� �˰��־ �־����ϴ�.
* Ȥ�� �� �κе� return 0 ó�� �ʼ� �� �ƴ��� �ñ��մϴ�.
* 
* <stdbool.h>���� ���� ���� 1,0 ���� true �� false �� ��ȯ�� �� �ֳ� ã�ƺ��� �˰� �Ǿ� �߰��߽��ϴ�.
* 
* �� if ���� else�� ���� Ȥ�� ������ �� �ַ��� ����� �־�ξ����ϴ�.
* 
* Ȥ�� ������ �κ��̳� ���� ���� �ִٸ� ���Ͽ� �����ֽø� �����ϰڽ��ϴ�. 
*/
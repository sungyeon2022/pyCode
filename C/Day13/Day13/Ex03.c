#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
* ���������� ����
* ���� = 1, ���� = 2,�� = 3 
* �Է� �� = ��ǻ�� : 2, �� : 2
* ��� �� = �����ϴ�.
* "��" �� �̱涧����
*/

int main() {
	int a=0;
	int b=0;
	while (1 == 1) {
		printf("���������� �����Դϴ�. ����:1, ����:2, ��:3 \n");
		printf("��ǻ�� : ");
		scanf_s("%d", &a);
		printf("�� : ");
		scanf_s("%d", &b);
		if (a - b == 2) {
			printf("�̰���ϴ�.");
			break;
		}
		else if (a - b == 1) {
			printf("�й��߽��ϴ�.");
		}
		else if (a - b == 0) {
			printf("�����ϴ�.");
		}
		else if (a - b == -2) {
			printf("�й��߽��ϴ�.");
		}
		else if (a - b == -1) {
			printf("�̰���ϴ�.");
			break;
		}
	}
}
#include <stdio.h>
#include <string.h>

static char* yuck = { "abcdefghij" };
static int time[] = { 2,3,2,1,2,2,3,3,1 };//�ð��� ������ ó���� ����� �������� �ʽ��ϴ�.

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
	printf("��� �ð� : %d \n", timeind);
	printf("��� : %d \n", moneyind);
}

int maisdfsdfsdfsdfsdfsdfn() {
	char a;
	char b;
	while (1) {
		printf("��߿��� �������� �Է����ּ���. \n");
		printf("���ۿ� : ");
		scanf_s("%c", &a, 1);
		rewind(stdin);
		printf("������ : ");
		scanf_s("%c", &b, 1);
		rewind(stdin);
		int anum = indexof(yuck, a);
		int bnum = indexof(yuck, b);
		int chai = anum - bnum;
		if (anum != -1 && bnum != -1) {
			if (chai == 0) printf("��߿��� �������� ���� �� �����ϴ�. �ٽ� �Է����ּ���. \n");
			else jiha(a, b);
		}
		else printf("�������� �ʴ� ���Դϴ�. �ٽ� �Է����ּ���. \n");
	}
}

/*
* ��� �ð��� ��� a,b,c ���� ����� ��� ������ 0 ���ᰡ 2���˴ϴ�.
* ���⼭ ���� �������� time�迭�� Ȯ���ϸ� 0��°�� a���� b�� 1��°�� b���� c���Դϴ�.
* ������� time �迭�� 0��°�� 1��° ���� ���ϸ� ����ð��� ���ɴϴ�.
* �ᱹ ���� ��ȣ ���� (���� ��ȣ - 1)������ time �迭 ���� ���ϸ� ���� ��� �ð��� ������ �˴ϴ�.
* Ȥ�� ��� �ð��� �迭 �̿���ϰ� �������� ����� �������� ��Ģ���� ���� ����� ���� �̷��� �ذ��Ͽ����ϴ�.
* 
* 
* ����� ��� 4�� �����̸� 400�� �ʰ��� ��� (���۹�ȣ�� ����ȣ�� ���� - 3)*10+400 �̱� ������ �����ϰ� ǥ���߽��ϴ�.
* 
* 
* �ݷ��� ��� ���� �ΰ��� �����ϴ� ��찡 ������ ���������� ������ ��� Ȯ���� ��� �̻�����ϴ�.
* �߰��� ���� �Է¿��� �߻��ϴ� ������ main ���� ó���ϴ°� �� ����Ұ� ���ٰ� ������ ��� 
*  main ���� ó���Ͽ����ϴ�.
* �߰��� ���� �ݴ�� ���� ���� ��߿��� �������� �ٲ㼭 �ذ��Ͽ����ϴ�.
* 
* ������ �κ��̳� �ٸ� ��ĵ� �ִٸ� ��Ź�帮�ڽ��ϴ�.
* 
* scnaf_s�� �Է� ���� ��� ǥ���Է� ���ۿ� �ܿ� ���ڰ� ���� rewind(stdin)���� �����ϰ� �ٽ� �Է¹޴� ������ �ذ��Ͽ����ϴ�.
*/
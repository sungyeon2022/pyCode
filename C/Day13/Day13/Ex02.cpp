#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct ST
{
	char name[20];
	int age;
}STU;

void STprint(STU * p) {
	printf("%s", (*p).name);
	printf("%d", p->age);
}

int msfdn() {
	struct ST stu1;
	struct ST stu2 = { "±è¼º±¹",24 };
	scanf_s("%s", stu1.name,20);
	scanf_s("%d", &stu1.age);
	STprint(&stu1);
	STprint(&stu2);
	return 0;
}
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed"
#define ERR printf("���� ���");
#define SUM(a,b) ((a)+(b))
#define MUL(a,b) ((a)*(b))

// �ڵ� 77.
/*
int main(int argc, char** argv) {
	int i;
	for (i = 0; i < argc; i++) {
		printf("%s\n", argv[i]);
	}
	return 0;
}
*/

int main(void) 
{
	// �ڵ� 78.
	/*
	int* pi;
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("�޸� ����");
		return 1;
	}
	*pi = 10;
	printf("������ ���: %d", *pi);

	free(pi);
	*/

	// �ڵ� 79
	/*
	int* pi;
	int i, sum = 0;
	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("�޸� ����");
		exit(1);
	}
	printf("�ټ��� ���� �Է�: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &pi[i]);
		sum += pi[i];
	}
	printf("�ټ��� ��� ����: %.1lf\n", (sum / 5.0));
	free(pi);
	*/

	// �ڵ� 80
	/*
	char* pstr;
	char temp[100];
	int checknull = 0;

	printf("�̸� �Է�: ");
	gets_s(temp);

	for (int i = 0; i < 100; i++) {
		if (temp[i] == '\0') {
			checknull = 1;
			break;
		}
	}
	if (checknull == 0) {
		printf("�Է� �ʰ�");
		return 1;
	}
	int mallocsize = (int)(sizeof(char) * strlen(temp) + 1);
	pstr = (char*)malloc(mallocsize);

	if (pstr == NULL) {
		printf("�޸� ����");
		return 1;
	}

	strcpy_s(pstr, mallocsize, temp);

	printf("�Է� �̸�: %s", pstr);

	free(pstr);
	*/

	// �ڵ� 88
	/*
	Student a = { 315, "ȫ�浿" };
	printf("%d %s", a.num, a.name);
	*/

	// �ڵ� 89
	/*
	double radius, area;
	printf("������: ");
	scanf_s("%lf", &radius);
	area = PI * radius * radius;
	if (radius > LIMIT) {
		ERR;
	}
	else {
		printf("�� ����:%.2lf(%s)", area, MSG);
	}
	*/

	// �ڵ� 90
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));

	res = 30 / MUL(2, 5);
	printf("res: %d", res);

	return 0;
}
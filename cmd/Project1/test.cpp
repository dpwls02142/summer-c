#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "student.h"
#define PI 3.14159
#define LIMIT 100.0
#define MSG "passed"
#define ERR printf("범위 벗어남");
#define SUM(a,b) ((a)+(b))
#define MUL(a,b) ((a)*(b))

// 코드 77.
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
	// 코드 78.
	/*
	int* pi;
	pi = (int*)malloc(sizeof(int));
	if (pi == NULL) {
		printf("메모리 부족");
		return 1;
	}
	*pi = 10;
	printf("정수형 사용: %d", *pi);

	free(pi);
	*/

	// 코드 79
	/*
	int* pi;
	int i, sum = 0;
	pi = (int*)malloc(5 * sizeof(int));
	if (pi == NULL) {
		printf("메모리 부족");
		exit(1);
	}
	printf("다섯명 나이 입력: ");
	for (i = 0; i < 5; i++) {
		scanf_s("%d", &pi[i]);
		sum += pi[i];
	}
	printf("다섯명 평균 나이: %.1lf\n", (sum / 5.0));
	free(pi);
	*/

	// 코드 80
	/*
	char* pstr;
	char temp[100];
	int checknull = 0;

	printf("이름 입력: ");
	gets_s(temp);

	for (int i = 0; i < 100; i++) {
		if (temp[i] == '\0') {
			checknull = 1;
			break;
		}
	}
	if (checknull == 0) {
		printf("입력 초과");
		return 1;
	}
	int mallocsize = (int)(sizeof(char) * strlen(temp) + 1);
	pstr = (char*)malloc(mallocsize);

	if (pstr == NULL) {
		printf("메모리 부족");
		return 1;
	}

	strcpy_s(pstr, mallocsize, temp);

	printf("입력 이름: %s", pstr);

	free(pstr);
	*/

	// 코드 88
	/*
	Student a = { 315, "홍길동" };
	printf("%d %s", a.num, a.name);
	*/

	// 코드 89
	/*
	double radius, area;
	printf("반지름: ");
	scanf_s("%lf", &radius);
	area = PI * radius * radius;
	if (radius > LIMIT) {
		ERR;
	}
	else {
		printf("원 면적:%.2lf(%s)", area, MSG);
	}
	*/

	// 코드 90
	int a = 10, b = 20;
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b));
	printf("x + y = %d\n", SUM(x, y));

	res = 30 / MUL(2, 5);
	printf("res: %d", res);

	return 0;
}
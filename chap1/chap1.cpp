#include <stdio.h>

int main(void) {

	// 코드 44
	/*
	int a;
	double b;
	char c;

	printf("int형 변수: %u\n", &a);
	printf("double형 변수: %u\n", &b);
	printf("char형 변수: %u\n", &c);
	*/

	// 코드 45
	int a;
	int* pa;

	pa = &a; // 주소값이 pa에 저장되고
	*pa = 10; // 변수 a에 10 대입

	printf("포인터로 a값 출력: %d\n", *pa);
	printf("변수명으로 a값 출력: %d", a);

	return 0;
}
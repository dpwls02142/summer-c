#include <stdio.h>

// void swap(int* pa, int* pb);
// void print_ary(int* pa);
// void print_ary2(int pa[5]);

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
	/*
	int a;
	int* pa;

	pa = &a; // 주소값이 pa에 저장되고
	*pa = 10; // 변수 a에 10 대입

	printf("포인터로 a값 출력: %d\n", *pa);
	printf("변수명으로 a값 출력: %d", a);
	*/

	// 코드 46
	/*
	int a = 10, b = 15, total;
	double avg;

	int* pa, * pb;
	int* pt = &total;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = (double)*pt / 2.0;

	printf("pa: %d, pb: %d\n", *pa, *pb);
	printf("pa + pb = %d\n", *pt);
	printf("avg: %.1lf", *pg);
	*/

	// 코드 47
	/*
	int a = 10, b = 20;
	swap(&a, &b);
	printf("a: %d, b: %d", a, b);
	*/

	// 코드 48
	/*
	int ary[3] = { 0 };
	int i;

	*(ary + 0) = 10; // ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10

	printf("ary[2] 요소 입력: ");
	scanf_s("%d", ary + 2); // &ary[2]

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}
	*/

	// 코드 49
	/*
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("배열 요소: ");
	for (i = 0; i < 3; i++) {
		printf("%d ", *pa);
		pa++;
	}
	*/

	// 코드 50
	/*
	int ary[5] = { 10, 20, 30, 40, 50 };
	print_ary(ary);
	print_ary2(ary);
	*/


	return 0;
}

/*
void swap(int* pa, int* pb) {
	int temp;
	temp = *pa;
	*pa = *pb;
	*pb = temp;
}
*/

/*
void print_ary(int* pa) {
	int i;
	printf("매개변수에서 포인터 선언 후 요소 접근: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]);
	}
}

void print_ary2(int pa[5]) {
	int i;
	printf("\n매개변수에서 배열 선언 후 요소 접근: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]);
	}
}
*/
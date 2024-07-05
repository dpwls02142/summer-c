#include <stdio.h>
#include <string.h>

// void swap(int* pa, int* pb);
// void print_ary(int* pa);
// void print_ary2(int pa[5]);

// void input_ary(double* pa, int size);
// double find_max(double* pa, int size);

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

	// 코드 51
	/*
	double ary[5];
	double max;

	input_ary(ary, 5);
	max = find_max(ary, 5);

	printf("배열 요소 중 최댓값: %.1lf\n", max);
	*/

	// 코드 52
	/*
	char small = 'a', cap = 'A';

	printf("문자 출력: %c %c\n", small, cap);
	printf("아스키 코드 출력: %d %d", small, cap);
	*/
	
	// 코드 54
	/*
	char str[80];
	printf("문자열 입력: ");
	scanf_s("%s", str, 80);
	printf("첫번째 단어: %s\n", str);
	
	scanf_s("%s", str, 80);
	printf("버퍼에 남아있는 두번째 단어: %s\n", str);
	*/
	
	// 코드 55
	/*
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = (char*)"banana";

	printf("최초 문자열: %s\n", str1);
	strcpy_s(str1, 80, str2);
	printf("바뀐 문자열: %s\n", str1);

	strcpy_s(str1, 80, ps1);
	printf("바뀐 문자열: %s", str1);
	*/
	
	// 코드 56
	/*
	char str[80] = "straw";
	strcat_s(str, 80, "berry");
	printf("%s\n", str);
	strncat_s(str, 80, "piece", 3);
	printf("%s\n", str);
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

/*
void input_ary(double* pa, int size)
{
	int i;
	printf("%d개의 실수값 입력: ", size);
	for (i = 0; i < size; i++) {
		scanf_s("%lf", pa + i);
	}
}

double find_max(double* pa, int size)
{
	double max;
	int i;
	max = pa[0];
	for (i = 1; i < size; i++)
	{
		if (pa[i] > max) {
			max = pa[i];
		}
	}
	return max;
}
*/
#include <stdio.h>

// void swap(int* pa, int* pb);
// void print_ary(int* pa);
// void print_ary2(int pa[5]);

int main(void) {

	// �ڵ� 44
	/*
	int a;
	double b;
	char c;

	printf("int�� ����: %u\n", &a);
	printf("double�� ����: %u\n", &b);
	printf("char�� ����: %u\n", &c);
	*/

	// �ڵ� 45
	/*
	int a;
	int* pa;

	pa = &a; // �ּҰ��� pa�� ����ǰ�
	*pa = 10; // ���� a�� 10 ����

	printf("�����ͷ� a�� ���: %d\n", *pa);
	printf("���������� a�� ���: %d", a);
	*/

	// �ڵ� 46
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

	// �ڵ� 47
	/*
	int a = 10, b = 20;
	swap(&a, &b);
	printf("a: %d, b: %d", a, b);
	*/

	// �ڵ� 48
	/*
	int ary[3] = { 0 };
	int i;

	*(ary + 0) = 10; // ary[0] = 10
	*(ary + 1) = *(ary + 0) + 10; // ary[1] = ary[0] + 10

	printf("ary[2] ��� �Է�: ");
	scanf_s("%d", ary + 2); // &ary[2]

	for (i = 0; i < 3; i++) {
		printf("%5d", *(ary + i));
	}
	*/

	// �ڵ� 49
	/*
	int ary[3] = { 10, 20, 30 };
	int* pa = ary;
	int i;

	printf("�迭 ���: ");
	for (i = 0; i < 3; i++) {
		printf("%d ", *pa);
		pa++;
	}
	*/

	// �ڵ� 50
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
	printf("�Ű��������� ������ ���� �� ��� ����: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]);
	}
}

void print_ary2(int pa[5]) {
	int i;
	printf("\n�Ű��������� �迭 ���� �� ��� ����: ");
	for (i = 0; i < 5; i++) {
		printf("%d ", pa[i]);
	}
}
*/
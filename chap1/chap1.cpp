#include <stdio.h>
#include <string.h>

// void swap(int* pa, int* pb);
// void print_ary(int* pa);
// void print_ary2(int pa[5]);

// void input_ary(double* pa, int size);
// double find_max(double* pa, int size);

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

	// �ڵ� 51
	/*
	double ary[5];
	double max;

	input_ary(ary, 5);
	max = find_max(ary, 5);

	printf("�迭 ��� �� �ִ�: %.1lf\n", max);
	*/

	// �ڵ� 52
	/*
	char small = 'a', cap = 'A';

	printf("���� ���: %c %c\n", small, cap);
	printf("�ƽ�Ű �ڵ� ���: %d %d", small, cap);
	*/
	
	// �ڵ� 54
	/*
	char str[80];
	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, 80);
	printf("ù��° �ܾ�: %s\n", str);
	
	scanf_s("%s", str, 80);
	printf("���ۿ� �����ִ� �ι�° �ܾ�: %s\n", str);
	*/
	
	// �ڵ� 55
	/*
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	char* ps1 = (char*)"banana";

	printf("���� ���ڿ�: %s\n", str1);
	strcpy_s(str1, 80, str2);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy_s(str1, 80, ps1);
	printf("�ٲ� ���ڿ�: %s", str1);
	*/
	
	// �ڵ� 56
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

/*
void input_ary(double* pa, int size)
{
	int i;
	printf("%d���� �Ǽ��� �Է�: ", size);
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
#include<stdio.h>

// void assign10(void);
// void assign20(void);
// int a;

// void auto_func(void);
// void static_func(void);

int main(void) {

	// �ڵ� 60
	/*
	int a = 10, b = 20;
	printf("��ȯ �� a: %d, b: %d \n", a, b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("��ȯ �� a: %d, b: %d", a, b);
	*/

	// �ڵ� 61
	/*
	printf("�Լ� ȣ�� �� a: %d \n", a);

	assign10();
	assign20();

	printf("�Լ� ȣ�� �� a: %d", a);
	*/

	// �ڵ� 62
	/*
	int i;
	printf("�Ϲ� ��������: ");
	for (i = 0; i < 3; i++) {
		auto_func();
	}
	printf("\n���� ��������: ");
	for (i = 0; i < 3;i++) {
		static_func();
	}
	*/

	// �ڵ� 63
	/*
	register int i;
	int sum = 0;

	for (int i = 1; i <= 10000; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	*/

	// �ڵ� 66
	/*
	int score[3][4];
	int total;
	double avg;
	for (int i = 0; i < 3; i++) {
		printf("4���� ���� �Է�: ");
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &score[i][j]);
		}
	}
	for (int i = 0; i < 3;i++) {
		total = 0;
		for (int j = 0; j < 4; j++) {
			total += score[i][j];
		}
		avg = total / 4.0;
		printf("����: %d, ���: %2.lf\n", total, avg);
	}
	*/

	// �ڵ� 67

	return 0;

}

/*
void assign10(void) {
	a = 10;
}
void assign20(void) {
	int a;
	a = 20;
}
*/

/*
void auto_func(void) {
	int a = 10;
	a++;
	printf("%d", a);
}

void static_func(void) {
	static int a;
	a++;
	printf("%d", a);
}
*/
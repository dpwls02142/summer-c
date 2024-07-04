#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// ���� 1.
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d %d %d %d %d", a + b, a - b, a * b, a / b, a % b);
	*/

	// ���� 2.
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);

	if (a <= -10000 || a >= 10000 || b <= -10000 || b >= 10000) // -10,000 ~ 10,000 ������ ������ �Է¹���
	{
		printf("error");
	}

	else
	{
		if (a > b) {
			printf(">");
		}
		else if (a < b) {
			printf("<");
		}
		else if (a == b) {
			printf("=");
		}
	}
	*/

	// ���� 3.
	/*
	int student_id;
	char name[50];

	scanf_s("%d %s", &student_id, name, 50);
	printf("%d %s", student_id, name);
	*/

	// ���� 4.
	/*
	int seat, audience;
	double rate;

	scanf_s("%d %d", &seat, &audience);
	rate = (double)audience / (double)seat * 100.0;
	printf("%.1lf", rate);
	*/

	// ���� 5.
	/*
	int test;
	scanf_s("%d", &test);
	if (0 <= test && test <= 100) { // ���̽�ó�� 0 <= test <= 100 �̷��� �� �� ��������
		if (test >= 90 || test <= 100) {
			printf("A");
		}
		else if (test >= 80 || test <= 89) {
			printf("B");
		}
		else if (test >= 70 || test <= 79) {
			printf("C");
		}
		else if (test >= 60 || test <= 69) {
			printf("D");
		}
		else {
			printf("F");
		}
	}
	else {
		printf("error");
	}
	*/

	// ���� 6.
	/*
	int n, i;
	scanf_s("%d", &n);

	if (n < 0) {
		printf("error");
	}
	else {
		for (i = 1; i <= n; i++) {
			printf("%d\n", i);
		}
	}
	*/

	// ���� 7.
	/*
	int n, i;
	int hap = 0;
	scanf_s("%d", &n);

	if (n >= 1 && n <= 10000) {
		for (i = 1; i <= n; i++) {
			hap += i;
		}
		printf("%d", hap);
	}
	else {
		printf("error");
	}
	*/

	// ���� 8.
	/*
	int n, i, j;

	scanf_s("%d", &n);

	if (n >= 1 && n <= 100) {
		for (i = 1; i <= n; i++) {
			for (j = 1; j <= i; j++) {
				printf("*");
			}
			printf("\n");
		}
	}
	else {
		printf("error");
	}
	*/

	// ���� 9.
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);

	if (a > 0 && b > 0) {
		printf("1");
	}
	else if (a < 0 && b > 0) {
		printf("2");
	}
	else if (a < 0 && b < 0) {
		printf("3");
	}
	else if (a > 0 && b < 0) {
		printf("4");
	}
	*/

	// ���� 10.
	/*
	float weight, height;
	double bmi;
	scanf_s("%f %f", &weight, &height);

	height = height / 100; // Ű�� cm�� �����ϱ� 100 ������
	// printf("%.1f", height);
	bmi = (double)weight / (height * height);

	if (bmi <= 20.0) {
		printf("��ü��\n");
	}
	else if (bmi > 20.0 && bmi <= 25.0) {
		printf("ǥ��ü��\n");
	}
	else if (bmi >= 25) {
		printf("��ü��\n");
	}
	*/

	// ���� 11.
	/*
	int year;
	scanf_s("%d", &year);
	if (year > 0) {
		if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) {
			printf("1"); // 4�� ����鼭 100�� ����� �ƴϰų� 400�� ����� �� �����̴� 1�� ���
		}
		else {
			printf("0");
		}
	}
	else {
		printf("error");
	}
	*/

	// ���� 12.
	/*
	int n, i;
	scanf_s("%d", &n);

	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	*/

	// ���� 13.
	/*
	int n[10]; // �迭
	int sum = 0; // ����
	double avg = 0.0; // ���

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &n[i]); // 10�� �Է� �ޱ�
		sum += n[i]; // �� ����
	}

	avg = (double)sum / 10; // ��� 10���� ����

	printf("%d %.1lf", sum, avg);
	*/

	// ���� 14
	/*
	int num; // ���ڷ� �Է� �޾ƾ� �Ǵϱ�
	int reversed = 0;
	scanf_s("%d", &num);

	while (num > 0) {
		int n = num % 10;   // ���� ������ ���� �ڸ� ���� ���ϱ�
		reversed = reversed * 10 + n;  // �Ųٷ� �� ���ڿ� ���� �ڸ� ���� �߰�
		num = num / 10;  // ���ڸ� 10���� ������ ���� �ڸ����� �̵�
	}

	printf("%d", reversed);
	*/

	// ���� 15
	/*
	int h, m; // �ð��� �� �Է� ����
	scanf_s("%d %d", &h, &m);

	m -= 35; // 35�� ���� �︮���� �����ؾ� �Ǵϱ� �п� -35
	if (m < 0) {
		m += 60;
		h -= 1;
		if (h < 0) {
			h = 23;
		}
	}

	printf("%d %d\n", h, m);
	*/

	// ���� 21
	/*
	int a, b;
	while (true) {
		scanf_s("%d %d", &a, &b);
		if ((a == -1) && (b == -1)) {
			break;
		}
		printf("%d", a + b);
	}
	*/

	// ���� 22
	/*
	int n, criteria;
	scanf_s("%d %d", &n, &criteria);

	int numbers[100];
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &numbers[i]);
	}

	for (int i = 0; i < n; i++) {
		if (numbers[i] < criteria) {
			printf("%d ", numbers[i]);
		}
	}
	*/

	// ���� 23
	/*
	int n;
	scanf_s("%d", &n);
	int numbers[100];
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &numbers[i]);
	}
	int min = numbers[0];
	int min_index = 0;
	for (int i = 1;i < n;i++) {
		if (numbers[i] < min) {
			min = numbers[i];
			min_index = i;
		}
	}
	printf("%d %d", min, min_index+1);
	*/

	// ���� 24
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);
	for (int i = 1; i <= 100; i++) {
		if ((i % a == 0 && i % b != 0) || (i % a != 0 && i % b == 0)) {
			printf("%d ", i);
		}
	}
	*/

	// ���� 25
	/*
	int a, b = 0;
	int remain[10];

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a);
		remain[i] = a % 42;
	}
	for (int i = 0; i < 10; i++) {
		int cnt = 0;
		for (int j = i + 1; j < 10; j++) {
			if (remain[i] == remain[j]) {
				cnt++;
			}
		}
		if (cnt == 0) {
			b++;
		}
	}
	printf("%d", b);
	*/

	// ���� 26
	/*
	int a;
	scanf_s("%d", &a);
	int* score = (int*)malloc(a * sizeof(int));
	int sum = 0, cnt = 0;
	double avg = 0.0;

	for (int i = 0; i < a; i++) {
		scanf_s("%d", &score[i]);
		sum += score[i];
	}

	avg = (double)sum / (double)a;

	for (int i = 0; i < a; i++) {
		if (score[i] >= avg) {
			cnt++;
		}
	}
	printf("%d", cnt);
	*/

	// ���� 27
	/*
	char c;
	scanf_s("%c", &c);
	printf("%d", c);
	*/

	// ���� 28


	// ���� 32.
	/*
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("¦��");
	}
	else if (a % 2 != 0) {
		printf("Ȧ��");
	}
	*/

	// ���� 35.
	/*
	int i;
	int sum = 0;

	for (i = 1; i <= 100; i++) {
		if (i % 3 == 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	*/

	// ���� 37.
	/*
	int a, i;
	scanf_s("%d", &a);
	for (i = 0; i <= a; i++) {
		if (i % 2 == 0) {
			printf("%d", a);
		}
		if (i % 5 == 0) {
			continue;
		}
	}
	*/


	return 0;

}
#include <stdio.h>
#include <stdlib.h>

int main(void) {

	// 연습 1.
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);
	printf("%d %d %d %d %d", a + b, a - b, a * b, a / b, a % b);
	*/

	// 연습 2.
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);

	if (a <= -10000 || a >= 10000 || b <= -10000 || b >= 10000) // -10,000 ~ 10,000 사이의 정수만 입력받음
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

	// 연습 3.
	/*
	int student_id;
	char name[50];

	scanf_s("%d %s", &student_id, name, 50);
	printf("%d %s", student_id, name);
	*/

	// 연습 4.
	/*
	int seat, audience;
	double rate;

	scanf_s("%d %d", &seat, &audience);
	rate = (double)audience / (double)seat * 100.0;
	printf("%.1lf", rate);
	*/

	// 연습 5.
	/*
	int test;
	scanf_s("%d", &test);
	if (0 <= test && test <= 100) { // 파이썬처럼 0 <= test <= 100 이렇게 쓸 순 없나보네
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

	// 연습 6.
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

	// 연습 7.
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

	// 연습 8.
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

	// 연습 9.
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

	// 연습 10.
	/*
	float weight, height;
	double bmi;
	scanf_s("%f %f", &weight, &height);

	height = height / 100; // 키는 cm로 받으니까 100 나누기
	// printf("%.1f", height);
	bmi = (double)weight / (height * height);

	if (bmi <= 20.0) {
		printf("저체중\n");
	}
	else if (bmi > 20.0 && bmi <= 25.0) {
		printf("표준체중\n");
	}
	else if (bmi >= 25) {
		printf("과체중\n");
	}
	*/

	// 연습 11.
	/*
	int year;
	scanf_s("%d", &year);
	if (year > 0) {
		if ((year % 4) == 0 && (year % 100) != 0 || (year % 400) == 0) {
			printf("1"); // 4의 배수면서 100의 배수가 아니거나 400의 배수일 때 윤년이니 1을 출력
		}
		else {
			printf("0");
		}
	}
	else {
		printf("error");
	}
	*/

	// 연습 12.
	/*
	int n, i;
	scanf_s("%d", &n);

	for (i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", n, i, n * i);
	}
	*/

	// 연습 13.
	/*
	int n[10]; // 배열
	int sum = 0; // 총합
	double avg = 0.0; // 평균

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &n[i]); // 10번 입력 받기
		sum += n[i]; // 합 누적
	}

	avg = (double)sum / 10; // 평균 10으로 나눔

	printf("%d %.1lf", sum, avg);
	*/

	// 연습 14
	/*
	int num; // 숫자로 입력 받아야 되니까
	int reversed = 0;
	scanf_s("%d", &num);

	while (num > 0) {
		int n = num % 10;   // 현재 숫자의 일의 자리 숫자 구하기
		reversed = reversed * 10 + n;  // 거꾸로 된 숫자에 일의 자리 숫자 추가
		num = num / 10;  // 숫자를 10으로 나누어 다음 자릿수로 이동
	}

	printf("%d", reversed);
	*/

	// 연습 15
	/*
	int h, m; // 시간과 분 입력 받음
	scanf_s("%d %d", &h, &m);

	m -= 35; // 35분 전에 울리도록 설정해야 되니까 분에 -35
	if (m < 0) {
		m += 60;
		h -= 1;
		if (h < 0) {
			h = 23;
		}
	}

	printf("%d %d\n", h, m);
	*/

	// 연습 21
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

	// 연습 22
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

	// 연습 23
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

	// 연습 24
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);
	for (int i = 1; i <= 100; i++) {
		if ((i % a == 0 && i % b != 0) || (i % a != 0 && i % b == 0)) {
			printf("%d ", i);
		}
	}
	*/

	// 연습 25
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

	// 연습 26
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

	// 연습 27
	/*
	char c;
	scanf_s("%c", &c);
	printf("%d", c);
	*/

	// 연습 28


	// 연습 32.
	/*
	int a;
	scanf_s("%d", &a);
	if (a % 2 == 0) {
		printf("짝수");
	}
	else if (a % 2 != 0) {
		printf("홀수");
	}
	*/

	// 연습 35.
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

	// 연습 37.
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
#include <stdio.h>
#include <stdlib.h>
#include<string.h>

void calculator(int* a, int* b, int* sum, int* sub, int* mult, int* div, int* rem);
void admission(int* audience, int* seat, double* rate);
void sum(int* a, int *res);
void quadrant(int* a, int* b);
void leapYear(int* a);
void diceGame();
int bep(int* fcost, int* vcost, int* sell);
int sugar(int* weight);
void factorial(int* n, int* res);
void add_three_numbers(int a, int b, int c) {
	static int sum = 0;
	sum = a + b + c;
	printf("��: %d\n", sum);
}

void swap(int* num1, int* num2, int* num3) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = *num3;
	*num3 = temp;
}

int isPalindrome(char word[]) {
	int len = strlen(word);

	for (int i = 0; i < len / 2; i++) {
		if (word[i] != word[len - 1 - i]) {
			return 0;
		}
	}

	return 1;
}

struct employee {
	char name[50];
	int id;
	int salary;
};

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
	rate = (double)seat / (double)audience * 100.0;
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

	// ���� 16
	/*
	int a, b;
	int sum, sub, mult, div, rem;

	scanf_s("%d %d", &a, &b);

	calculator(&a, &b, &sum, &sub, &mult, &div, &rem);
	printf("%d %d %d %d %d", sum, sub, mult, div, rem);
	*/
	
	// ���� 17
	/*
	int seat, audience;
	double rate;

	scanf_s("%d %d", &seat, &audience);
	
	admission(&seat, &audience, &rate);
	printf("%.1lf", rate);
	*/

	// ���� 18
	/*
	int a, res;

	scanf_s("%d", &a);

	sum(&a, &res);

	printf("%d", res);
	*/

	// ���� 19
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);

	quadrant(&a, &b);
	*/
	
	// ���� 20
	/*
	int a;
	scanf_s("%d", &a);

	leapYear(&a);
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
	// diceGame();

	// ���� 29
	/*
	int fcost, vcost, sell;
	scanf_s("%d %d %d", &fcost, &vcost, &sell);

	int cnt = bep(&fcost, &vcost, &sell);

	printf("%d", cnt);
	*/
	
	// ���� 30
	/*
	int weight;
	scanf_s("%d", &weight);

	int res = sugar(&weight);
	printf("%d", res);
	*/

	// ���� 31
	/*
	int n, res;
	scanf_s("%d", &n);

	if (n < 0 || n>12) {
		return 1;
	}

	factorial(&n, &res);
	printf("%d", res);
	*/

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

	// ���� 33.
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (abs(a) > abs(b)) {
		printf("%d", a);
	}
	else {
		printf("%d", b);
	}
	*/

	// ���� 34
	/*
	int sum = 0;
	int i = 1;
	while (i <= 100) {
		if (i % 3 == 0) {
			sum += i;
		}
		i++;
	}
	printf("%d", sum);
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

	// ���� 36
	/*
	int sum = 0;
	int i = 1;
	do {
		if (i % 3 == 0) {
			sum += i;
		}
		i++;
	} while (i <= 100);
	printf("%d", sum);
	*/

	// ���� 37.
	/*
	int n;
	scanf_s("%d", &n);
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		if (i % 2 != 0 || i % 5 == 0) {
			continue;
		}
		sum += i;
	}
	printf("%d", sum);
	*/

	// ���� 38
	/*
	int num;
	int max = 1;

	while (true) {

		scanf_s("%d", &num);

		if (num == -1) {
			break;
		}

		if (num > max) {
			max = num;
		}
	}
	printf("%d", max);
	*/

	// ���� 39
	/*
	int days_in_months[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int month, day;
	scanf_s("%d %d", &month, &day);
	int total_days = 0;

	for (int i = 0; i < month - 1; i++) {
		total_days += days_in_months[i];
	}
	total_days += day;

	printf("%d", total_days);
	*/

	// ���� 40
	/*
	int scores[10];
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &scores[i]);
	}

	int sum = 0;
	int max = scores[0];
	int min = scores[0];
	int size = 10;

	for (int i = 0; i < size; i++) {
		sum += scores[i];
		if (scores[i] > max) {
			max = scores[i];
		}
		if (scores[i] < min) {
			min = scores[i];
		}
	}

	printf("����: %d\n", sum);
	printf("���: %.2f\n", (float)sum / size);
	printf("�ְ� ����: %d\n", max);
	printf("���� ����: %d\n", min);
	*/

	// ���� 41
	/*
	int x1, y1, x2, y2;

	scanf_s("%d %d", &x1, &y1);

	scanf_s("%d %d", &x2, &y2);

	int width = abs(x2 - x1);
	int height = abs(y2 - y1);
	int area = width * height;

	printf("�簢���� ����: %d\n", area);
	*/

	// ���� 42
	/*
	int sum = 0, count = 0, num;

	while (true) {
		
		scanf_s("%d", &num);

		if (num == 0) {
			break;
		}
		sum += num;
		count++;
	}

	printf("��: %d, ���: %.2f\n", sum, (double)sum / count);
	*/
	
	// ���� 43
	/*
	int n, sum = 0;
	scanf_s("%d", &n);
	for (int i = 1; i <= n; i++) {
		if (i % 2 == 0 && i % 3 != 0) {
			sum += i;
		}
	}
	printf("%d", sum);
	*/

	// ���� 44
	/*
	int a, b, sum = 0;
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		int temp = a;
		a = b;
		b = temp;
	}
	for (int i = a; i <= b;i++) {
		sum += i;
	}
	printf("%d", sum);
	*/

	// ���� 45
	/*
	int n, gob = 1;
	scanf_s("%d", &n);
	for (int i = 1; i <= n;i++) {
		gob *= i;
	}
	printf("%d", gob);
	*/
	
	// ���� 46
	/*
	for (int i = 1; i <= 100; i++) {
		if (i % 7 == 0 || i % 9 == 0) {
			printf("%d\n", i);
		}
	}
	*/

	// ���� 47
	/*
	int a, b;
	scanf_s("%d %d", &a, &b);
	if (a > b) {
		printf("%d", a - b);
	}
	else {
		printf("%d", b - a);
	}
	*/

	// ���� 48
	/*
	for (int A = 0; A <= 9; A++) {
		for (int Z = 0; Z <= 9; Z++) {
			if (10 * A + Z + 10 * Z + A == 99) {
				printf("A = %d, Z = %d\n", A, Z);
			}
		}
	}
	*/

	// ���� 49
	/*
	int n;

	scanf_s("%d", &n);

	int a = 0, b = 1, next;

	for (int i = 0; i < n; i++) {
		if (i == 0) {
			printf("%d", a);
		}
		else if (i == 1) {
			printf(" %d", b);
		}
		else {
			next = a + b;
			a = b;
			b = next;
			printf(" %d", next);
		}
	}
	printf("\n");
	*/

	// ���� 50
	/*
	int x, y, z;

	scanf_s("%d %d %d", &x, &y, &z);

	add_three_numbers(x, y, z);
	*/

	// ���� 51
	/*
	int total_seconds;
	int hours, minutes, seconds;

	scanf_s("%d", &total_seconds);

	hours = total_seconds / 3600;
	minutes = (total_seconds % 3600) / 60;
	seconds = total_seconds % 60;

	printf("h:%d m:%d s:%d\n", hours, minutes, seconds);
	*/

	// ���� 52
	/*
	int n;
	int result = 1;

	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		result *= 2;
	}

	printf("%d", result);
	*/
	
	// ���� 53
	/*
	int arr[5];
	int max, min, sum = 0;

	for (int i = 0; i < 5; i++) {
		scanf_s("%d", &arr[i]);
	}

	max = arr[0];
	min = arr[0];

	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];
		}
		if (arr[i] < min) {
			min = arr[i];
		}
		sum += arr[i];
	}

	printf("�ִ�: %d\n", max);
	printf("�ּڰ�: %d\n", min);
	printf("��: %d\n", sum);
	*/

	// �ڵ� 54
	/*
	char word[100];
	char max_char;

	scanf_s("%s", word);

	max_char = word[0];
	for (int i = 1; i < strlen(word); i++) {
		if (word[i] > max_char) {
			max_char = word[i];
		}
	}

	printf("%c", max_char);
	*/

	// �ڵ� 55
	/*
	int num1, num2, num3;
	scanf_s("%d %d %d", &num1, &num2, &num3);

	swap(&num1, &num2, &num3);

	printf("�ٲ� ��: num1 = %d, num2 = %d, num3 = %d\n", num1, num2, num3);
	*/

	// �ڵ� 56
	/*
	int arr[10], odd[10], even[10];
	int odd_count = 0, even_count = 0;

	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &arr[i]);
	}

	for (int i = 0; i < 10; i++) {
		if (arr[i] % 2 != 0) {
			odd[odd_count++] = arr[i];
		}
		else {
			even[even_count++] = arr[i];
		}
	}

	for (int i = 0; i < odd_count; i++) {
		printf("%d ", odd[i]);
	}
	for (int i = even_count - 1; i >= 0; i--) {
		printf("%d ", even[i]);
	}
	printf("\n");
	*/
	
	// �ڵ� 57
	/*
	char word[100];

	scanf_s("%s", word);

	if (isPalindrome(word)) {
		printf("1");
	}
	else {
		printf("0");
	}
	*/
	
	// �ڵ� 58
	/*
	int record[4][4]; 
	char names[4][10] = { "ö��", "ö��", "����", "����" };
	int total[4] = { 0 }; 

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &record[i][j]);
			total[i] += record[i][j]; 
		}
	}

	for (int i = 0; i < 4; i++) {
		printf("%s�� ����: %d\n", names[i], total[i]);
	}
	*/
	
	// �ڵ� 59
	/*
	int arr[4][4];
	int reversed[4][4];
	int count = 1;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (int i = 3; i >= 0; i--) {
		for (int j = 3; j >= 0; j--) {
			reversed[3 - i][3 - j] = arr[i][j];
		}
	}

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 4; j++) {
			printf("%d ", reversed[i][j]);
		}
	}
	*/

	// �ڵ� 60
	/*
	char ch;

	scanf_s(" %c", &ch);

	if ('A' <= ch && ch <= 'Z') {
		printf("%c�� �ҹ���: %c\n", ch, ch + ('a' - 'A'));
	}
	else if ('a' <= ch && ch <= 'z') {
		printf("%c�� �빮��: %c\n", ch, ch - ('a' - 'A'));
	}
	*/

	// �ڵ� 61
	/*
	struct employee emp;

	printf("�̸�: ");
	scanf_s("%s", emp.name, 50);

	printf("������ȣ: ");
	scanf_s("%d", &emp.id);

	printf("�޿�����: ");
	scanf_s("%d", &emp.salary);

	printf("�̸�: %s\n", emp.name);
	printf("������ȣ: %d\n", emp.id);
	printf("�޿�����: %d", emp.salary);
	*/

	// �ڵ� 62
	/*
	struct employee emp[3];

	for (int i = 0; i < 3; i++) {
		printf("��� %d �̸��� �Է��ϼ���: ", i + 1);
		scanf_s("%s", emp[i].name, 50);

		printf("��� %d ������ȣ�� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &emp[i].id);

		printf("��� %d �޿������� �Է��ϼ���: ", i + 1);
		scanf_s("%d", &emp[i].salary);
	}

	for (int i = 0; i < 3; i++) {
		printf("��� %d\n", i + 1);
		printf("�̸�: %s\n", emp[i].name);
		printf("������ȣ: %d\n", emp[i].id);
		printf("�޿�����: %d\n", emp[i].salary);
		printf("\n");
	}
	*/

	

	return 0;
	
}

void calculator(int* a, int* b, int* sum, int* sub, int* mult, int* div, int* rem)
{
	*sum = *a + *b;
	*sub = *a - *b;
	*mult = *a * *b;
	*div = *a / *b;
	*rem = *a % *b;
}

void admission(int *audience, int *seat, double *rate) {
	*rate = ((double)* seat / (double)* audience) * 100.0;
}

void sum(int* a, int* res)
{
	*res = 0;
	for (int i = 1; i <= *a; i++) 
	{
		*res += i;
	}
}

void quadrant(int* a, int* b)
{
	if (*a > 0 && *b > 0) {
		printf("1");
	}
	else if (*a < 0 && *b > 0) {
		printf("2");
	}
	else if (*a < 0 && *b < 0) {
		printf("3");
	}
	else if (*a > 0 && *b < 0) {
		printf("4");
	}
}

void leapYear(int* a)
{
	if (*a > 0) {
		if ((*a % 4) == 0 && (*a % 100) != 0 || (*a % 400) == 0) {
			printf("1"); // 4�� ����鼭 100�� ����� �ƴϰų� 400�� ����� �� �����̴� 1�� ���
		}
		else {
			printf("0");
		}
	}
	else {
		printf("error");
	}
}

void diceGame()
{
	int a, b, c;
	scanf_s("%d %d %d", &a, &b, &c);

	int prize;

	if (a == b && b == c) {
		prize = 10000 + a * 1000;
	}
	else if (a == b) {
		prize = 1000 + a * 100;
	}
	else if (b == c) {
		prize = 1000 + b * 100;
	}
	else if (c == a) {
		prize = 1000 + c * 100;
	}
	else {
		int max = a;
		if (b > max) max = b;
		if (c > max) max = c;

		prize = max * 100;
	}

	printf("%d\n", prize);
}
int bep(int* fcost, int* vcost, int* sell)
{
	if (*sell <= *vcost) {
		return -1;
	}
	return (*fcost / (*sell - *vcost))+1;
}

int sugar(int* weight)
{	
	int n = *weight;
	int cnt = 0;

	while (n % 5 != 0 && n >= 0) {
		n -= 3;
		cnt++;
	}
	if (n < 0) {
		return -1;
	}
	else {
		return cnt + n / 5;
	}

	return 0;
}

void factorial(int* n, int* res)
{
	*res = 1;
	for (int i = 1; i <= *n; i++) {
		*res *= i;
	}
}

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// void assign10(void);
// void assign20(void);
// int a;

// void auto_func(void);
// void static_func(void);

#define VER 7
#define BIT32

struct student
{
	int num;
	double grade;
};

struct profile {
	char name[20];
	int age;
	double height;
	char* info;
};
/*
struct student
{
	int id;
	char name[20];
	double grade;
};
*/
struct vision {
	double left;
	double right;
};

struct vision exchange(struct vision robot);

struct address {
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

enum season { spring, sumer, fall, winter };

typedef struct student Student;

void print_data(Student* ps);

void fruit(int count);

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

	// �ڵ� 69
	/*
	struct student s1;
	s1.num = 2;
	s1.grade = 2.7;
	printf("�й�: %d\n", s1.num);
	printf("����: %.1lf\n", s1.grade);
	*/

	// �ڵ� 70
	/*
	struct profile yuni;

	strcpy_s(yuni.name, 20, "������");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.info = (char*)malloc(80);
	printf("�ڱ�Ұ�: ");

	if (yuni.info != NULL) {
		gets_s(yuni.info, sizeof(yuni.info));
	}
	printf("�̸�: %s\n", yuni.name);
	printf("����: %d\n", yuni.age);
	printf("Ű: %.1lf\n", yuni.height);
	if (yuni.info != NULL) {
		printf("�ڱ�Ұ�: %s\n", yuni.info);
	}
	free(yuni.info);
	*/

	// �ڵ� 72
	/*
	struct student s1 = { 315, "ȫ�浿", 2.4 };
	struct student s2 = { 316, "�̼���", 3.4 };
	struct student s3 = { 317, "�������", 4.4 };

	struct student max;

	max = s1;

	if (s2.grade > max.grade) {
		max = s2;
	}
	if (s3.grade > max.grade) {
		max = s3;
	}

	printf("�й�: %d\n", max.id);
	printf("�̸�: %s\n", max.name);
	printf("����: %.1lf\n", max.grade);
	*/

	// �ڵ� 73
	/*
	struct vision robot;
	printf("���� �÷�: ");
	scanf_s("%lf %lf", &(robot.left), &(robot.right));

	robot = exchange(robot);
	printf("�ٲ� �÷�: %.1lf %.1lf", robot.left, robot.right);
	*/
	
	// �ڵ� 74
	/*
	struct address list[5] = {
	{"ȫ�浿", 23, "111-1111", "���� ����"},
	{"ǳ����", 22, "211-1111", "��õ �۵�"},
	{"ȣ�ó��", 23, "311-1111", "�Ϻ� ����"},
	{"����", 24, "411-1111", "���� �Ǵ�"},
	{"����", 25, "511-1111", "���� ȫ��"},
	};

	int i;

	for (i = 0; i < 5; i++) {
		printf("%10s %5d %15s %20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	*/

	// �ڵ� 75
	/*
	enum season ss;
	char* pc = NULL;

	ss = spring;
	switch (ss) {
	case spring:
		pc = (char*)"inline";
		break;
	case sumer:
		pc = (char*)"swimming";
		break;
	case fall:
		pc = (char*)"trip";
		break;
	case winter:
		pc = (char*)"skiing";
		break;
	}
	printf("���� Ȱ�� => %s\n", pc);
	*/
	
	// �ڵ� 76
	/*
	Student s1 = {315, 4.2};
	print_data(&s1);
	*/

	// �ڵ� 81
	/*
	FILE* fp;
	int err = fopen_s(&fp, "hanrayng.txt", "r");
	if (err != 0) {
		printf("������ ������ �ʾҽ��ϴ�");
		return 1;
	}
	printf("������ ���Ƚ��ϴ�");
	fclose(fp);
	*/

	// �ڵ� 82
	/*
	FILE* fp;
	int ch;
	int err;

	err = fopen_s(&fp, "hanrayng.txt", "r");
	if (err != 0) {
		printf("������ ������ �ʾҽ��ϴ�");
		return 1;
	}
	

	while (1) {
		ch = fgetc(fp);
		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}
	fclose(fp);
	*/

	// �ڵ� 83
	/*
	FILE* fp;
	char str[] = "cherry";
	int i = 0, err;

	err = fopen_s(&fp, "b.txt", "w");
	if (err != 0) {
		printf("����");
		return 1;
	}
	while (str[i] != '\0') {
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);
	*/

	// �ڵ� 84
	/*
	int ch;
	while (1) {
		ch = getchar();
		if (ch == EOF) {
			break;
		}
		putchar(ch);
	}
	*/

	// �ڵ� 85
	/*
	FILE* fp;
	int ary[10] = { 13,10,13,13,10,26,13,10,13,10 };
	int i, res, err;

	err = fopen_s(&fp, "hanrayng.txt", "wb");
	if (err != 0) {
		printf("������ ������ �ʾҽ��ϴ�");
		return 1;
	}
	for (i = 0; i < 10; i++) {
		fputc(ary[i], fp);
	}
	fclose(fp);
	*/

	// �ڵ� 86
	/*
	FILE* fp;
	char str[] = "strawberry";
	int i = 0, err;

	err = fopen_s(&fp, "b.txt", "a+");
	if (err != 0) {
		printf("����");
		return 1;
	}

	while (str[i] != '\0') {
		fputc(str[i], fp);
		i++;
	}
	fputc('\n', fp);
	fclose(fp);
	*/

	// �ڵ� 87
	FILE* fp;
	int num = 10, res, err;

	err = fopen_s(&fp, "c.txt", "wb");
	if (err != 0) {
		printf("����");
		return 1;
	}
	fwrite(&num, sizeof(num), 1, fp);
	fclose(fp);

	if (fopen_s(&fp, "c.txt", "rb") == 0) {
		fread(&res, sizeof(res), 1, fp);
		printf("%d", res);

		fclose(fp);
	}
	// �ڵ� 91
	/*
	int max;
#if VER >= 6
	printf("���� %d\n", VER);
#endif

#ifdef BIT16
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int�� ���� �ִ�: %d", max);
	*/

	// �ڵ� 94
	// fruit(1);
	
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

struct vision exchange(struct vision robot) {
	double temp;
	temp = robot.left;
	robot.left = robot.right;
	robot.right = temp;

	return robot;
}

void print_data(Student* ps)
{
	printf("�й�: %d\n", ps->num);
	printf("����: %.1lf\n", ps->grade);
}

void fruit(int count) {
	printf("apple\n");
	if (count == 5) {
		return;
	}
	fruit(count + 1);
	printf("jam\n");
}

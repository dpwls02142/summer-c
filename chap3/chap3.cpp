#include<stdio.h>
#include<stdlib.h>
#include<string.h>

// void assign10(void);
// void assign20(void);
// int a;

// void auto_func(void);
// void static_func(void);

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

int main(void) {

	// 코드 60
	/*
	int a = 10, b = 20;
	printf("교환 전 a: %d, b: %d \n", a, b);
	{
		int temp;
		temp = a;
		a = b;
		b = temp;
	}
	printf("교환 후 a: %d, b: %d", a, b);
	*/

	// 코드 61
	/*
	printf("함수 호출 전 a: %d \n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a: %d", a);
	*/

	// 코드 62
	/*
	int i;
	printf("일반 지역변수: ");
	for (i = 0; i < 3; i++) {
		auto_func();
	}
	printf("\n정적 지역변수: ");
	for (i = 0; i < 3;i++) {
		static_func();
	}
	*/

	// 코드 63
	/*
	register int i;
	int sum = 0;

	for (int i = 1; i <= 10000; i++) {
		sum += i;
	}
	printf("%d\n", sum);
	*/

	// 코드 66
	/*
	int score[3][4];
	int total;
	double avg;
	for (int i = 0; i < 3; i++) {
		printf("4과목 점수 입력: ");
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
		printf("총점: %d, 평균: %2.lf\n", total, avg);
	}
	*/

	// 코드 69
	/*
	struct student s1;
	s1.num = 2;
	s1.grade = 2.7;
	printf("학번: %d\n", s1.num);
	printf("학점: %.1lf\n", s1.grade);
	*/

	// 코드 70
	/*
	struct profile yuni;

	strcpy_s(yuni.name, 20, "서하윤");
	yuni.age = 17;
	yuni.height = 164.5;

	yuni.info = (char*)malloc(80);
	printf("자기소개: ");

	if (yuni.info != NULL) {
		gets_s(yuni.info, sizeof(yuni.info));
	}
	printf("이름: %s\n", yuni.name);
	printf("나이: %d\n", yuni.age);
	printf("키: %.1lf\n", yuni.height);
	if (yuni.info != NULL) {
		printf("자기소개: %s\n", yuni.info);
	}
	free(yuni.info);
	*/

	// 코드 72
	/*
	struct student s1 = { 315, "홍길동", 2.4 };
	struct student s2 = { 316, "이순신", 3.4 };
	struct student s3 = { 317, "세종대왕", 4.4 };

	struct student max;

	max = s1;

	if (s2.grade > max.grade) {
		max = s2;
	}
	if (s3.grade > max.grade) {
		max = s3;
	}

	printf("학번: %d\n", max.id);
	printf("이름: %s\n", max.name);
	printf("학점: %.1lf\n", max.grade);
	*/

	// 코드 73
	/*
	struct vision robot;
	printf("양쪽 시력: ");
	scanf_s("%lf %lf", &(robot.left), &(robot.right));

	robot = exchange(robot);
	printf("바뀐 시력: %.1lf %.1lf", robot.left, robot.right);
	*/
	
	// 코드 74
	/*
	struct address list[5] = {
	{"홍길동", 23, "111-1111", "서울 송파"},
	{"풍월량", 22, "211-1111", "인천 송도"},
	{"호시노겐", 23, "311-1111", "일본 도쿄"},
	{"ㅎㅇ", 24, "411-1111", "서울 건대"},
	{"ㅇㅇ", 25, "511-1111", "서울 홍대"},
	};

	int i;

	for (i = 0; i < 5; i++) {
		printf("%10s %5d %15s %20s\n", list[i].name, list[i].age, list[i].tel, list[i].addr);
	}
	*/

	// 코드 75
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
	printf("레저 활동 => %s\n", pc);
	*/
	
	// 코드 76
	Student s1 = { 315, 4.2 };
	print_data(&s1);
	
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
	printf("학번: %d\n", ps->num);
	printf("학점: %.1lf\n", ps->grade);
}

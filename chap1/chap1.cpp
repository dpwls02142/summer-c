#include <stdio.h>

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
	int a;
	int* pa;

	pa = &a; // �ּҰ��� pa�� ����ǰ�
	*pa = 10; // ���� a�� 10 ����

	printf("�����ͷ� a�� ���: %d\n", *pa);
	printf("���������� a�� ���: %d", a);

	return 0;
}
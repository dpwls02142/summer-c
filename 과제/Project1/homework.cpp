#include <stdio.h>

void input_ary(double* pa, int size);
double find_max(double* pa, int size);
void line_updown(double* pa, int size, int asc);

int main(void)
{
	double ary[5];
	double max;

	input_ary(ary, 5);
	max = find_max(ary, 5);
	printf("배열의 최댓값: %.1lf\n", max);

	printf("오름차순 정렬: ");
	line_updown(ary, 5, 1);

	printf("\n내림차순 정렬: ");
	line_updown(ary, 5, 0);

	return 0;
}

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
	for (i = 1; i < size; i++) {
		if (pa[i] > max) {
			max = pa[i];
		}
	}
	return max;
}

void line_updown(double* pa, int size, int asc)
{
	double a;
	for (int i = 0; i < size - 1; i++) {
		for (int j = 0; j < size - 1 - i;j++) {
			if (((asc == true) && (pa[j] > pa[j + 1])) || ((asc == false) && (pa[j] < pa[j + 1])))
			{
				a = pa[j];
				pa[j] = pa[j + 1];
				pa[j + 1] = a;
			}
		}
	}
	for (int i = 0; i < size;i++) {
		printf("%.1lf ", pa[i]);
	}
}

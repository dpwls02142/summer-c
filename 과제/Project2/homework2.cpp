#include <stdio.h>

void prime(int a);

int main(void) 
{
	int a;
	scanf_s("%d", &a);
	prime(a);

	return 0;

}
void prime(int a)
{
	int i, cnt = 0;
	for (i = 1;i <= a;i++) {
		if (a % i == 0) {
			cnt++;
		}
	}

	if (cnt == 2) {
		printf("O");
	}
	else {
		printf("X");
	}
}
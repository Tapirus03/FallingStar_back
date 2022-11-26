#include <stdio.h>

int main(void)
{
	float a;

	printf("실수를 입력하시오: ");
	scanf("%f", &a);

	printf("실수형식으로는 %f입니다.\n", a);
	printf("지수형식으로는 %e입니다.", a);

	return 0;
}
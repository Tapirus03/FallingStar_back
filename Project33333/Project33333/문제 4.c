#include <stdio.h>;

int main(void)
{
	double a, b;

	const double SQMETER_PER_PYEONG = 3.3058;

	printf("평을 입력하세요: ");
	scanf("%lf", &a);

	b = a * SQMETER_PER_PYEONG;

	printf("%lf평방미터입니다.", b);

	return 0;
}
#include <stdio.h>;

int main(void)
{
	double a, b;

	const double SQMETER_PER_PYEONG = 3.3058;

	printf("���� �Է��ϼ���: ");
	scanf("%lf", &a);

	b = a * SQMETER_PER_PYEONG;

	printf("%lf�������Դϴ�.", b);

	return 0;
}
#include <stdio.h>

int main(void)
{
	double mass, speed, kenergy;

	printf("����: ");
	scanf("%lf", &mass);

	printf("�ӵ�: ");
	scanf("%lf", &speed);

	kenergy = 0.5 * mass * speed * speed;

	printf("�������: %lf", kenergy);

	return 0;
}
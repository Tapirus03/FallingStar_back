#include <stdio.h>

int main(void)
{
	double light_speed = 300000;
	double distance = 149600000;

	double time;
	int minute;
    double second;

	time = distance / light_speed;
	minute = time / 60;
	second = time - (60 * minute);

	printf("���� �ӵ��� %lfkm/s \n", light_speed);
	printf("�¾�� �������� �Ÿ� %lfkm \n", distance);
	printf("���� �ð��� %lf�� \n", time);
	printf("���� �ð��� %d�� %lf��", minute, second);

	return 0;
}
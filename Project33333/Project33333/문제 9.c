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

	printf("빛의 속도는 %lfkm/s \n", light_speed);
	printf("태양과 지구와의 거리 %lfkm \n", distance);
	printf("도달 시간은 %lf초 \n", time);
	printf("도달 시간은 %d분 %lf초", minute, second);

	return 0;
}
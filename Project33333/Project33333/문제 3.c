#include <stdio.h>

int main(void)
{
    double w, h, d, sum;

    printf("상자의 가로 세로 높이를 한번에 입력: ");
    scanf("%lf%lf%lf", &w, &h, &d);

    sum = w * h * d;

    printf("상자의 부피는 %lf입니다.", sum);

    return 0;
}
#include <stdio.h>

int main(void)
{
    double w, h, d, sum;

    printf("������ ���� ���� ���̸� �ѹ��� �Է�: ");
    scanf("%lf%lf%lf", &w, &h, &d);

    sum = w * h * d;

    printf("������ ���Ǵ� %lf�Դϴ�.", sum);

    return 0;
}
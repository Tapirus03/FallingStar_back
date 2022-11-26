#include <stdio.h>

double number(int x);

int main(void)
{
    int n = 0;
    printf("정수를 입력하시오: ");
    scanf_s("%d", &n);
    printf("%lf\n", number(n));
    return 0;
}

double number(int x)
{
    double a;
    static double sum = 0;
    a = 1 / (double)x;
    sum += a;
    if (x > 1)
    {
        number(x - 1);
    }
    return sum;
}
#include <stdio.h>

int fib(int);

int main()
{
	int i, n;

	printf("피보나츠수를 처음부터 10번째까지 출력합니다.\n");

	for (i = 0; i < 10; i++)
	{
		printf(" %d번째 피보나츠수        %d\n", i, fib(i));
	}
	printf("10번째 피보나츠수        %d", fib(i));

	return 0;
}

int fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
#include <stdio.h>

int fib(int);

int main()
{
	int i, n;

	printf("�Ǻ��������� ó������ 10��°���� ����մϴ�.\n");

	for (i = 0; i < 10; i++)
	{
		printf(" %d��° �Ǻ�������        %d\n", i, fib(i));
	}
	printf("10��° �Ǻ�������        %d", fib(i));

	return 0;
}

int fib(int n)
{
	if (n == 0 || n == 1)
		return n;
	else
		return fib(n - 1) + fib(n - 2);
}
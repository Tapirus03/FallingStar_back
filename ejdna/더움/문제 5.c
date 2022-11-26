#include <stdio.h>


void show_digit(int x)
{
	if (x / 10 != 0)
	{
		show_digit(x / 10);
		printf("%d ", x % 10);
	}
	else
		printf("%d ", x);
}

void show_digit_reverse(int x)
{
	int i = 0;
	while(i<x)
	{
		printf("%d ", x % 10);
		x =  x / 10;
		i++;
	}
	printf("%d\n", x % 10);
}

int main()
{
	int x;
	printf("������ �Է��Ͻÿ�: ");
	scanf_s("%d", &x);
	printf("���� :");
	show_digit_reverse(x);
	printf("������� :");
	show_digit(x);
	return 0;
}
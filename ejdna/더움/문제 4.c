#include <stdio.h>

int num;

int lenth (int len)
{
	if (num < 10 && num > -10)
		return len;

	num /= 10;
	return lenth(len + 1);
}

int main(void)
{
	printf("������ �Է��Ͻÿ� : ");
	scanf_s("%d", &num);

	printf("�ڸ����� ����: %d\n", lenth(1));
	return 0;
}
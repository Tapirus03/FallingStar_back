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
	printf("정수를 입력하시오 : ");
	scanf_s("%d", &num);

	printf("자리수의 개수: %d\n", lenth(1));
	return 0;
}
#include <stdio.h>

int get_tax(int income)
{
	if (income <= 1000)
		return income * 0.08;
	else
		return income * 0.1;
}

int main(void)
{
	int num;
	printf("소득을 입력하시오(만원): ");
	scanf_s("%d", &num);
	printf("소득세는 %d만원입니다.", get_tax(num));
	return 0;
}

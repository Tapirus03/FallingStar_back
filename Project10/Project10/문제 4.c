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
	printf("�ҵ��� �Է��Ͻÿ�(����): ");
	scanf_s("%d", &num);
	printf("�ҵ漼�� %d�����Դϴ�.", get_tax(num));
	return 0;
}

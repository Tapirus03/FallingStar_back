#include <stdio.h>

int check(int key)
{
	if (key == 1234)
		return 1;
	else
		return 0;
}

int main()
{
	int key, answer, i;
	for (i = 0; i < 3; i++)
	{
		printf("��й�ȣ: ");
		scanf_s("%d", &key);
			answer = check(key);
			if (answer == 0)
				continue;
			if (answer == 1)
				printf("�α��� ����");
		break;
	}
	if (answer == 0)
		printf("�α��� Ƚ�� �ʰ�");
		return 0;
}
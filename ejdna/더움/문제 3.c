#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	printf("�ζ� ��÷ ��ȣ�� ");
	for(int i=0;i<6;i++)
		random();
	printf("\b\b");
	printf(" �Դϴ�.");

	return 0;
}
int random() {
	int n;
	n = rand()%45+1;
	printf("%d", n);
	printf(", ");

}
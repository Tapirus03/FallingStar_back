#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	srand((unsigned)time(NULL));
	printf("로또 당첨 번호는 ");
	for(int i=0;i<6;i++)
		random();
	printf("\b\b");
	printf(" 입니다.");

	return 0;
}
int random() {
	int n;
	n = rand()%45+1;
	printf("%d", n);
	printf(", ");

}
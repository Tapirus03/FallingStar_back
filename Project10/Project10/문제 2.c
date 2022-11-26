#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int is_prime(int num);

int main(void) {
	int num;
	printf("정수를 입력하시오: ");
	scanf_s("%d", &num);

	for (int n = 2; n <= num; n++) {
		if (is_prime(n))
			printf("%d ", n);
	}
	return 0;
}

int is_prime(int num) {
	for (int i = 2; i < num; i++)	
		if (num % i == 0) 
			return 0;
	return 1;
}
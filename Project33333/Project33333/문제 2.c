#include <stdio.h>

int main(void)
{
	int x, y, tmp;
	
	x = 10;
	y = 20;

	printf("x=%d, y=%d\n", x, y);

	tmp = x;
	x = y;
	y = tmp;

	printf("x=%d, y=%d", x, y);

	return 0;
}
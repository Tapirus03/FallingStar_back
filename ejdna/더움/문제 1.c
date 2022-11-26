#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int get_dice_face(int);

int main()
{
	static int one = 0; static int two = 0; static int three = 0; static int four = 0; static int five = 0; static int six = 0;

		srand((unsigned)time(NULL));

		int n, output;

		for (int i = 0; i < 100; i++)
		{
			n = rand() % 6;
				output = get_dice_face(n);
			if (output == 0)
					one++;
			if (output == 1)
				two++;
			if (output == 2)
				three++;
			if (output == 3)
				four++;
			if (output == 4)
				five++;
			if (output == 5)
				six++;
		}
		printf("1-> %d\n2-> %d\n3-> %d\n4-> %d\n5-> %d\n6-> %d", one, two, three, four, five, six);
		return 0;
}

int get_dice_face(int n)

{
		if (n == 0)
			return 0;
		if (n == 1)
			return 1;
		if (n == 2)
			return 2;
		if (n == 3)
			return 3;
		if (n == 4)
			return 4;
		if (n == 5)
			return 5;
}
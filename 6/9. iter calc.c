#include <stdio.h>

int main()
{
	int x;
	int a = 1;
	double y = 1;
	double z = 0;
	int i;

	for (i = 1; i < 19;)
	{
		i = i + 2;
		for (x = 0; x < a + 1; x++)
		{
			y = y*i;
		}
		a = x;
		z = z + y;
		y = 1;
	}
	z = z + 1;
	printf("결과값은 %lf입니다.", z);
}
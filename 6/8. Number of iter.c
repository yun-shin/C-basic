#include <stdio.h>

int main()
{
	int x=0;
	int y=0;
	int z=0;
	int i;

	for(i=0; z<=500; i++)
	{
		z= z+y;
		y=y+2;
	}
	printf("x값은 %d이고 %d번 돌았습니다.\n", y, i);
	return 0;
}
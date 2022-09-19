#include <stdio.h>

int main ()
{
	int x=11;
	int y;
	int result = 0;

	for(y=0; y<6; y++)
	{
		result=x+y;
		x--;
		if(result==11)
		{
			printf("%d + %d = 11\n", x+1, y);
		}
	}
	return 0;
}
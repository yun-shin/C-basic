#include <stdio.h>
#define NUMBER 11


int main ()
{
	int x=NUMBER;
	int y;
	int result = 0;
	int f=0;

	if(NUMBER%2==1)
		f=NUMBER/2+1;

	for(y=0; y<f; y++)
	{
		result=x+y;
		x--;
	if(result==11)
		printf("%d + %d = 11\n", x+1, y);
	}
	return 0;
}
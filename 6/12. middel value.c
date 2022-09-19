#include <stdio.h>

int main()
{
	int x;
	int y=0;
	int i;
	int middle=0;
	int result = 0;

	for(i=0; i<=100; i++)
	{
		for(x=0; x<=y+1; x++)
		{
			middle= middle+x;	
		}
		result = result+middle;
		y++;
		middle = 0;
	}
	printf("%d\n",result);
	return 0;
}
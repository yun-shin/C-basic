#include <stdio.h>

int main()
{
	int x;
	double y=0;
	int i;
	int count=0;

	for (i=2; i<=100; i++)
	{
		for(x=1; x<=i; x++)
		{
			y=i%x;
			if(y==0){
				count++;
			}
		}
		if(count==2)
			printf("%d\n", i);
		count = 0;
	}
	return 0;
}
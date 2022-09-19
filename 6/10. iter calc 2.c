#include <stdio.h>

int main ()
{
	double x=3;
	double y=0;
	double z=0;
	double w=2;
	double i;
	double result=0;

	for(i=2; i<10; i+=2)
	{
		y=i/x;
		result=result-y;
		x+=2;
	}
	
	for(i=1; i<10; i+=2)
	{
		z=i/w;
		result=result+z;
		w+=2;
	}

	printf("값은 %lf입니다\n", result);
	return 0;
}
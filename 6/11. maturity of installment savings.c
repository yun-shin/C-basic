#include <stdio.h>

int main()
{
	double x = 10000.0;
	double result;
	int i;
	result = x + (0.045)*x;
	for(i=1; i<10; i++)
	{
		result = result + ((0.045)*result);
	}
	printf("10년 만기시 금액은 %lf원 입니다.\n", result);
	
	return 0;
}
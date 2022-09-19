#include <stdio.h>

int main()
{
	double y;
	int x;

	printf("x의 값을 입력하시오.\n");
	scanf("%d", &x);

	if (x>0)
		y =(7*x)+2;

	else
		y =(x*x*x)-(9*x)+2;
	
	printf("f(x)의 값은 %lf", y);
	return 0;
}

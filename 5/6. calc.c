#include <stdio.h>

int main()
{
	double y;
	int x;

	printf("x�� ���� �Է��Ͻÿ�.\n");
	scanf("%d", &x);

	if (x>0)
		y =(7*x)+2;

	else
		y =(x*x*x)-(9*x)+2;
	
	printf("f(x)�� ���� %lf", y);
	return 0;
}

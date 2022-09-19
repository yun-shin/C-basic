#include <stdio.h>
int main ()
{
	int a;
	int b;
	int c;
	int x;
	int y;

	printf("3개의 정수를 입력하시오.");
	scanf("%d %d %d", &a, &b, &c);

	x = a-b;
	y = b-c;

	if(x<0)
		printf("%d", -x);
	else if (x>0)
		printf("%d", x);
	if (y<0)
		printf("%d", -y);
	else if (y>0)
		printf("%d", y);

	return 0;
}
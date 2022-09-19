#include <stdio.h>

int main ()
{
	int x;
	int y = 0;
	int z= 0;

	printf("양의 정수를 입력해주세요 :");
	scanf("%d", &x);

	while (y<=x)
	{
		z= z+y;
		y=y+2;
	}
	
	printf("답은 %d입니다.", z);
	return 0;
}
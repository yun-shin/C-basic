#include <stdio.h>

int main ()
{
	int x;
	int y = 0;
	int z= 0;
	int w = 0;

	printf("양의 정수를 입력해주세요 :");
	scanf("%d", &x);

	while (w<=x)
	{
		w=y*7;
		z= z+w;
		y++;
	}
	z=z-w;
	printf("답은 %d입니다.", z);
	return 0;
}
#include <stdio.h>

int main()
{
	int i;
	int x=0;
	int y=-1;										// i가 0일때 y가 +1되므로 -1부터 시작

	for(i=0; x<10000; i++)
	{
		x=x+i;
		y++;
	}
	x=x-y;
	y--;											// 마지막 한번더한거 빼기
	printf("가장큰 값 : %d\tn의 값 : %d\n",x, y);
	return 0;
}


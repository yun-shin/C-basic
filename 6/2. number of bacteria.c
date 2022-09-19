#include <stdio.h>

int main()
{
	int x= 10;
	int y= 0;

	while(y<=7)
	{
		x=x*4;
		y++;
	}
	printf("7시간후 세균은 %d 마리 입니다.\n", x);
	return 0;
}
#include <stdio.h>

int main()
{
	int a = 1;
	int b=0;
	int x=0;


	while(a<=100)
	{
		a=a*2;
		b++;
		
	}
	printf("총 %d번 접었습니다.", b);
	return 0;
}
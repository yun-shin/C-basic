#include <stdio.h>

int main()
{
	int y;
	int x;

	printf("좌표 (x,y)의 값을 입력해주세요.\n");
	scanf("%d %d", &x, &y);

	if (x>0 && y>0)
		printf("1사분면");   

	else if (x>0 && y<0)
		printf("2사분면");      

	else if (x<0 && y<0)
		printf("3사분면");         

	else
		printf("4사분면");         


	return 0;
}

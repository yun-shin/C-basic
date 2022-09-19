#include <stdio.h>

int main()
{
	int x;
	int y=0;
	
	printf("값을 입력해주세요.\n");
	scanf("%d", &x);

	if(x>0)
	{
		y = x % 2;
		switch (y)
		{
		case 0:
			printf("%d", x/2);
			break;
		case 1:
			printf("%d", x*3+1);
			break;
		}
	}
	else
		printf("양수가 아닙니다.");
	
	return 0;
}

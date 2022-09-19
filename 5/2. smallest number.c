#include <stdio.h>

int main()
{

	int z;
	int x;
	int y;

	printf("3개의 숫자를 입력해주세요.\n");
	scanf("%d %d %d", &x, &y, &z);

	if (x>y)
	{
		if (y>z)
			printf("가장 작은 숫자는 %d입니다.\n", z);
		else
			printf("가장 작은 숫자는 %d입니다.\n", y);
	}
	
	else
	{
		if (x>z)
			printf("가장 작은 숫자는 %d입니다.\n", z);
		else
			printf("가장 작은 숫자는 %d입니다.\n", x);
	}

	return 0;
}

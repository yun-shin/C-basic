#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(void)
{
	int x, y, z;
	int a, b, c;
	int i;
	int strake = 0;
	int ball = 0;




	while (1)
	{
		srand((unsigned)time(NULL));
		x = rand() % 9 + 1;
		y = rand() % 9 + 1;
		z = rand() % 9 + 1;
		if (x == y || x == z || y == z)
			continue;
		break;
	}
	for (i = 0; i<5; i++)
	{
		printf("숫자를 입력하시오 : ");
		scanf("%d %d %d", &a, &b, &c);
		strake = 0;
		ball = 0;
		if (x == a) ++strake;
		else if (x == b || x == c) ++ball;
		if (y == b) ++strake;
		else if (y == a || y == c) ++ball;
		if (z == c) ++strake;
		else if (z == a || z == b) ++ball;
		printf("strake: %d ball %d\n", strake, ball);
		if (strake == 3)
		{
			printf("축하합니다.");
			break;
		}
	}
}
[출처] 야구게임 | 작성자 sgkdbgmldhkd
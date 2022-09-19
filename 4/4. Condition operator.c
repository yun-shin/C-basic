// 조건 연산자 ? 만을 이용하여 2차원 공간의 x좌표와 y좌표를 입력받아서 그 좌표가 속하는 사분면을 출력하는 프로그램
#include <stdio.h>

int main ()
{
	int x;
	int y;

	printf("x좌표와 y좌표를 입력하시오.: ");
	scanf("%d %d", &x, &y);

	(x>0 && y>0)? printf("1사분면\n"): printf("");
	(x<0 && y>0)? printf("2사분면\n"): printf("");
	(x<0 && y<0)? printf("3사분면\n"): printf("");
	(x>0 && y<0)? printf("4사분면\n"): printf("");

	return 0;
}
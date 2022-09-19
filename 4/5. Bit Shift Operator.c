// 비트 이동 연산을 이용하여 문자 4개를 받아서 하나의 unsigned int 형의 변수 안에 저장하는 프로그램
#include <stdio.h>

int main ()
{
	char a,b,c,d;
	unsigned int x, y, z, q;

	printf("4개의 문자를 입력해주세요.:");
	scanf("%c %c %c %c", &a, &b, &c, &d);

	y = b<<8;
	z = c<<16;
	q = d<<24;
	x = a|y|q|z;
	
	printf("%x\n", x);

	return 0;
}
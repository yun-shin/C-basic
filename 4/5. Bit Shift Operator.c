// ��Ʈ �̵� ������ �̿��Ͽ� ���� 4���� �޾Ƽ� �ϳ��� unsigned int ���� ���� �ȿ� �����ϴ� ���α׷�
#include <stdio.h>

int main ()
{
	char a,b,c,d;
	unsigned int x, y, z, q;

	printf("4���� ���ڸ� �Է����ּ���.:");
	scanf("%c %c %c %c", &a, &b, &c, &d);

	y = b<<8;
	z = c<<16;
	q = d<<24;
	x = a|y|q|z;
	
	printf("%x\n", x);

	return 0;
}
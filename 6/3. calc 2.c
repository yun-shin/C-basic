#include <stdio.h>

int main ()
{
	int x;
	int y = 0;
	int z= 0;

	printf("���� ������ �Է����ּ��� :");
	scanf("%d", &x);

	while (y<=x)
	{
		z= z+y;
		y=y+2;
	}
	
	printf("���� %d�Դϴ�.", z);
	return 0;
}
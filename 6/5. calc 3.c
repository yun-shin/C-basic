#include <stdio.h>

int main ()
{
	int x;
	int y = 0;
	int z= 0;
	int w = 0;

	printf("���� ������ �Է����ּ��� :");
	scanf("%d", &x);

	while (w<=x)
	{
		w=y*7;
		z= z+w;
		y++;
	}
	z=z-w;
	printf("���� %d�Դϴ�.", z);
	return 0;
}
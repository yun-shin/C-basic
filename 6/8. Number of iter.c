#include <stdio.h>

int main()
{
	int x=0;
	int y=0;
	int z=0;
	int i;

	for(i=0; z<=500; i++)
	{
		z= z+y;
		y=y+2;
	}
	printf("x���� %d�̰� %d�� ���ҽ��ϴ�.\n", y, i);
	return 0;
}
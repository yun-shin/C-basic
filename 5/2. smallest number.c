#include <stdio.h>

int main()
{

	int z;
	int x;
	int y;

	printf("3���� ���ڸ� �Է����ּ���.\n");
	scanf("%d %d %d", &x, &y, &z);

	if (x>y)
	{
		if (y>z)
			printf("���� ���� ���ڴ� %d�Դϴ�.\n", z);
		else
			printf("���� ���� ���ڴ� %d�Դϴ�.\n", y);
	}
	
	else
	{
		if (x>z)
			printf("���� ���� ���ڴ� %d�Դϴ�.\n", z);
		else
			printf("���� ���� ���ڴ� %d�Դϴ�.\n", x);
	}

	return 0;
}

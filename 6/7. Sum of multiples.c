#include <stdio.h>

int main()
{
	int x;
	int y = 0;
	int z = 0;
	int m;
	int n;
	int w=0;

	printf("������ �����ּ���. :");
	scanf("%d %d", &m, &n);
	printf("������ ���� ���Ұ��� �˷��ּ���. :");
	scanf("%d", &x);

	while (w<=n)
	{
		w = y*x;
		z=z+w;
		y++;
		if (w<m)
			z=0;
	}
	z=z-w;
	printf("���� %d�Դϴ�.", z);
	return 0;
}
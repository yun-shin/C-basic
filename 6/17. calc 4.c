#include <stdio.h>

int main()
{
	int i;
	int x=0;
	int y=-1;										// i�� 0�϶� y�� +1�ǹǷ� -1���� ����

	for(i=0; x<10000; i++)
	{
		x=x+i;
		y++;
	}
	x=x-y;
	y--;											// ������ �ѹ����Ѱ� ����
	printf("����ū �� : %d\tn�� �� : %d\n",x, y);
	return 0;
}


// ���� ������ ? ���� �̿��Ͽ� 2���� ������ x��ǥ�� y��ǥ�� �Է¹޾Ƽ� �� ��ǥ�� ���ϴ� ��и��� ����ϴ� ���α׷�
#include <stdio.h>

int main ()
{
	int x;
	int y;

	printf("x��ǥ�� y��ǥ�� �Է��Ͻÿ�.: ");
	scanf("%d %d", &x, &y);

	(x>0 && y>0)? printf("1��и�\n"): printf("");
	(x<0 && y>0)? printf("2��и�\n"): printf("");
	(x<0 && y<0)? printf("3��и�\n"): printf("");
	(x>0 && y<0)? printf("4��и�\n"): printf("");

	return 0;
}
#include <stdio.h>

int main()
{
	int n=0;
	int r=0;
	int i;
	int result=0;
	int count=1;

	printf("n�� �� : ");
	scanf("%d", &n);

	printf("r�� �� : ");
	scanf("%d", &r);

	result = n;

	for(i=n; count<r; i--)
	{
		result=result*(i-1);
		count++;
	}
	
	printf("������ ���� %d�Դϴ�.", result);
	return 0;
}
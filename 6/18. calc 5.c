#include <stdio.h>

int main()
{
	int x;
	int a=0;
	int i;
	int b=1;
	int c=0;

	printf("�� ��° �ױ��� ���ұ��?");
	scanf("%d", &x);

	for(i=0; i<=x; i++)
	{
		c=a+b;
		a=b;
		b=c;
		c=c-a;
		printf("%d   ",c);
	}
	return 0;
}
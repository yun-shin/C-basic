#include <stdio.h>

int main()
{
	int n=0;
	int r=0;
	int i;
	int result=0;
	int count=1;

	printf("n의 값 : ");
	scanf("%d", &n);

	printf("r의 값 : ");
	scanf("%d", &r);

	result = n;

	for(i=n; count<r; i--)
	{
		result=result*(i-1);
		count++;
	}
	
	printf("순열의 값은 %d입니다.", result);
	return 0;
}
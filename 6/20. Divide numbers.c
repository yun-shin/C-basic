#include <stdio.h>

int main()
{
	int x;
	int one=0;
	int ten=0;
	int hundred=0;
	int s=0;
	int thousand=0;
	int result = 0;

	printf("4�ڸ� ������ ����� �Է��Ͻÿ�. : ");
	scanf("%d", &x);

	while(1)
	{
		if(x<=0 || x>=10000)
		{
			printf("4�ڸ� ������ ����� �Է��Ͻÿ�. : ");
			scanf("%d",&x);
		}
		else
			break;
	}
	one = x;
	do{
		one=one/10;
	}while(one>=10);

	one= one % 10;					// ���� �ڸ�

	ten = x;

	do{
		ten=ten/100;
	}while(ten>=100);

	ten= ten % 10 * 10;				// ���� �ڸ�

	hundred = x;

	do{
		hundred=x/10;
	}while(hundred>=1000);

	hundred = hundred % 10 * 100;		// ���� �ڸ�

	thousand = x;

	thousand = (thousand % 1000) % 100 % 10 * 1000;	// õ�� �ڸ�

	result = one + ten + hundred + thousand;

	printf("%d\n", result);





	return 0;
}
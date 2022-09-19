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

	printf("4자리 이하의 양수를 입력하시오. : ");
	scanf("%d", &x);

	while(1)
	{
		if(x<=0 || x>=10000)
		{
			printf("4자리 이하의 양수를 입력하시오. : ");
			scanf("%d",&x);
		}
		else
			break;
	}
	one = x;
	do{
		one=one/10;
	}while(one>=10);

	one= one % 10;					// 일의 자리

	ten = x;

	do{
		ten=ten/100;
	}while(ten>=100);

	ten= ten % 10 * 10;				// 십의 자리

	hundred = x;

	do{
		hundred=x/10;
	}while(hundred>=1000);

	hundred = hundred % 10 * 100;		// 백의 자리

	thousand = x;

	thousand = (thousand % 1000) % 100 % 10 * 1000;	// 천의 자리

	result = one + ten + hundred + thousand;

	printf("%d\n", result);





	return 0;
}
#include <stdio.h>

int is_prime(int);
int get_integer();

main()
{
	int n, result;

	n = get_integer();
	result = is_prime(n);

	if( result == 0 )
		printf("%d은 소수입니다.\n", n);
	else
		printf("%d은 소수가 아닙니다.\n", n);
	return 0;
}

int get_integer()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	// n*=-1
	while(1){
		if(n<0){
			printf("정수를 입력하시오: ");
			scanf("%d", &n);
		}
		else
			break;
	}
	return n;
}

int is_prime(int n)
{
	int dicisors = 0, i;
	for(i=2; i<=n-1; i++)
	{
		if(n%i == 0){
			dicisors++;
			break;
		}
	}
	return (dicisors == 2);
}
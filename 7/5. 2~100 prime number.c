#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_prime();

void main()
{
	printf("2~100의 소수를 출력합니다.\n");
	is_prime();
}


int is_prime()
{
	int i, num, count = 0;
	int prime = 1;


	for (num = 2; num<100; num++)
	{
		prime = 1;
		for (i = 2; i<num; i++)
		{
			if (num%i == 0)
				prime = 0;
		}

		if (prime)
		{
			printf("%d\n", num);
			count++;
		}
	}
}
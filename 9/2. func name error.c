#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 10

void _for(int i);
int _for2( int i);
static int prices[SIZE];
int main()
{
	int i=0, max;

	printf("---------------------------------------------------------------------------------------------------\n");
	printf("	1	2	3	4	5	6	7	8	9	10\n");
	printf("------------------------------------------+--------------------------------------------------------\n");
	srand((unsigned)time(NULL));
	_for(prices[SIZE], i);
	printf("\n\n");

	max = prices[0];
	max = _for2(prices[SIZE], i);

	printf("최대값은 %d입니다.\n", max);

	return 0;
}

void _for(int i)
{
	for (i = 0; i < SIZE; i++)
	{
		prices[i] = (rand() % 100) + 1;
		printf("%-3d", prices[i]);
	}
}

int _for2(int i)
{
	int max=0;
	for (i = 1; i < SIZE; i++)
	{
		if (prices[i] > max)
			max = prices[i];
	}
	return max;
}
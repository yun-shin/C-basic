#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
#define SIZE 10 
int main(void)
{
	int num[10] = { 0 };
	int max, i, save = 0;
	srand((unsigned)time(NULL));

	for (i = 0; i<100; i++)
	{
		save = rand() % 10;
		num[save]++;
	}
	max = num[0];
	for (i = 0; i<10; i++)
	{
		if (max<num[i])
		{
			max = num[i];
		}
	}
	for (i = 0; i<10; i++)
	{
		if (num[i] == max)
		{
			break;
		}
	}
	printf("가장 많이 생성된 수 : %d\n", i);
	printf("생성 횟수 : %d\n", max);
}



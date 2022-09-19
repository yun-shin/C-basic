#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10	

int main()
{
	int key, i;
	int list[SIZE] = { 1,2,3,4,5,6,7,8,9,10 };

	printf("Å½»öÇÒ °ª ¼³Á¤:\t");
	scanf("%d", &key);

	for (i = 0; i < SIZE; i++)
		if (list[i] == key)
		{
			printf("Å½»ö ¼º°ø ÀÎµ¦½º = %d\n", i);
			printf("Å½»öÁ¾·á.\n");
			return 0;
		}
	printf("Å½»öÁ¾·á.\n");
	return 0;
}
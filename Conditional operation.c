#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int x, age, people, ok, xx;
	int zero = 0;

	printf("무주택 기간(달), 가구주의 연령, 가족의 수를 입력하시오.: ");
	scanf("%d %d %d", &x, &age, &people);

	ok = x >= 18 && age >= 40 && people >= 3;
	printf("%d\n", (ok > zero) ? ok : zero);


	return 0;
}
// 비례식을 이용한 프로그램
#include <stdio.h>

int main ()
{
	int AC, AE, BC, DE;

	printf("AC와 AE와 BC를 입력하세요.: ");
	scanf("%d %d %d", &AC, &AE, &BC);

	DE=(AE*BC)/AC;
	printf("DE의 값: %d", DE);

	return 0;
}

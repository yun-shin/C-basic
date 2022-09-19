// int형의 정수를 비트 연산자를 사용하여서 2의 보수로 변환하는 프로그램
#include <stdio.h>

int main ()
{ 
	int input;
	int result = 0;
	
	printf("정수를 입력하세요: ");
	scanf("%d", &input);

	result = ~input + 1;
	printf("2의 보수: %d", result);

	return 0;
}
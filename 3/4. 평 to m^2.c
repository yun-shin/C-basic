/* 면적의 단위 평을 제곱미터로 환산하는 프로그램 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define P 3.3058							// 기호상수

int main()
{
	int p;									// 변수 p
	double je;								// 변수 je
	
	printf("평을 입력하세요.:");			// 입력 안내
	scanf("%d",&p);

	je = p * P;								// 제곱미터 계산
	
	printf("%f평방미터 입니다.", je);		// 결과값 출력

	return 0;
}
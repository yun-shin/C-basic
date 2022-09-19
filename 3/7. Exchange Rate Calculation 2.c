/* 달러화를 원화로 계산하는 프로그램 */
#include <stdio.h>

int main ()
{
	int usd = 0;												// 달러 변수, 초기화 안하면 디버깅오류
	float krw = 0;												// 원화 변수, 초기화 안하면 디버깅오류

	printf("%d, %f\n", usd, krw);								// 달러와 원화의 쓰레기 값 출력

	printf("달러화 금액을 입력하시오: ");					// 입력 안내
	scanf("%d", &usd);										// 입력

	krw = 1120 * usd;										// 달러 원화로 바꾸기

	printf("달러화 %d달러는 %f원입니다.\n", usd, krw);		// 달러와 환전한 수 출력

	return 0;
}
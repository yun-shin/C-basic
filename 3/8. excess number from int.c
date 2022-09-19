/* 정수 자료형을 사용하는 프로그램에서 값이 21억 이상을 출력하려 할 때 */
#include <stdio.h>

int main ()
{
	short year = 0;										// 변수 년
	int sale = 0;										// 변수 매출량 
	long total_sale = 0;								// 변수 전체 매출량
	long long larg_value;								// 64바이트 정수형

	year = 100;											// 년 값 설정
	sale = 200000000;									// 매출량 설정
	total_sale = year * sale;							// 전체 매출량 계산

	printf("total_sale = %d\n", total_sale);			// 전체 매출량 출력

	return 0;
}

/* define 과 const를 사용한 프로그램 */
#include <stdio.h>
#define TAX_RATE 0.2									// define을 이용한 상수 정의

int main ()
{
	const int MONTHS = 23;								// const를 이용한 기호 상수 정의
	int m_salary, y_salary;								// 변수선언
	
	MONTHS = 10;										// const를 사용한 변수를 한번 바꿔보았다.			(오류)

	printf("월급을 입력하시오: ");						// 입력 안내문
	scanf("%d", &m_salary);

	y_salary = MONTHS * m_salary;						// 순수입 계산

	printf("연봉은 %d입니다.\n", y_salary);
	printf("세금은 %f입니다.\n", y_salary*TAX_RATE);

	return 0;
}
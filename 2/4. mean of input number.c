#include <stdio.h>

int main ()
{
	float x, y, z, Add, Average;							// 변수 5개 설정

	printf("실수 3개를 입력하시오.\n");						// scanf 설명
	scanf("%f %f %f", &x, &y, &z);							// 실수 3개 입력받음

	Add = x+y+z;											// 실수 3개의 합 구함
	Average = (x+y+z)/3;									// 실수 3개의 평균값 구함

	printf("합계는 %f\n평균값은 %f\n", Add, Average);		// 실수 3개의 합과 평균값 출력
	
	return 0;
}
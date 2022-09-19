/* 원의 면적을 계산하는 프로그램 */
#include <stdio.h>

int main()
{
	float radius;						// 원의 반지름
	float area;							// 면적

	printf("반지름을 입력하시오: ");	// 입력 안내 메시지
	scanf("%f", &radius);				// 사용자로부터 반지름 입력

	area = 3.14 * radius * radius;		// 원의 넓이 계산

	printf("원의 면적: %f\n", area);	// 계산 결과 출력

	return 0;							// 함수 결과값 반환
}
/* 사각형의 넓이와 둘레를 구하는 프로그램 */
#include <stdio.h>

int main ()
{
	double w, h, area, perimeter;												// 실수 변수를 한번에 합침

	printf("w값과 h값을 설정해주십시오.\n");									// scanf를 설명
	scanf("%lf %lf", &w, &h);													// w값과 h값을 입력할수 있게함

	area = w*h;																	// 면적의 값 설정

	perimeter = 2*(w+h);														// 둘레의 값 설정
	printf("사각형의 넓이 : %lf\n사각형의 둘레 : %lf\n", area, perimeter);		// 넓이의 값과 둘레의 값 출력 

	return 0;
}


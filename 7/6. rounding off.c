#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
double round(double f);

void main()
{
	double f;

	printf("실수를 입력하시오 : ");
	scanf("%lf", &f);

	round(f);


}


double round(double f)
{
	f = (int)(f + 0.5);
	printf("반올림한 값은 %lf입니다.\n", f);

	return f;
}

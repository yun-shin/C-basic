/* 오버플로우, 언더플로우 발생시키기 */
#include <stdio.h>

int main ()
{
	float x = 1e39;				// 변수 너무 큼
	float y = 1.23456e-38;		// 변수 너무 적음
	float z = 1.23456e-40;		// 변수 너무 적음
	float w = 1.23456e-46;		// 변수 너무 적음

	printf("x = %e\n", x);		// 오버플로우 발생

	printf("y = %e\n". y);		// 언더플로우 발생
	printf("z = %e\n", z);		// 언더플로우 발생
	printf("w = %e\n", w);		// 언더플로우 발생

	return 0;
}
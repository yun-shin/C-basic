/* 자료형의 크기를 알아보는 프로그램 */
#include <stdio.h>

int main ()
{
	int x;
	printf("변수 x의 크기: %d\n", sizeof(x));		 // 변수 x의 크기

	printf("char형의 크기: %d\n", sizeof(char));	 // char형의 크기
	printf("int형의 크기: %d\n", sizeof(int));		 // int형의 크기
	printf("short형의 크기: %d\n", sizeof(short));	 // short형의 크기
	printf("long형의 크기: %d\n", sizeof(long));	 // long형의 크기
	printf("float형의 크기: %d\n", sizeof(float));	 // float형의 크기
	printf("double형의 크기: %d\n", sizeof(double)); // double형의 크기

	return 0;
}

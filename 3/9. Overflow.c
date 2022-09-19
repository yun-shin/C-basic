/* 오버플로우에 관한 프로그램 */
#include <stdio.h>
#include <limits.h>

int main ()
{
	short s_money = SHRT_MAX;				// 최대값으로 초기화 한다, 32767
	unsigned short u_money = USHRT_MAX;		// 최대값으로 초기화 한다. 65535

	s_money = s_money + 1;					// 최대값에서 +1
	printf("s_money = %d\n", s_money);		// 출력

	u_money = u_money + 1;					// 최대값에서 +1
	printf("u_money = %d\n", u_money);		// 출력

	return 0;
}
/* 경보음이 울린 후에 다음과 같은 메시지를 출력하고 다시 경보음이 울리는 프로그램 */
#include <stdio.h>

int main()
{
	printf("\a");
	printf("(경보음)화제가 발생하였습니다.\a");

	return 0;
}
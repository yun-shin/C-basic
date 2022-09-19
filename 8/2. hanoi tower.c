#include <stdio.h>
int hanoi_tower(int n, char from, char tmp, char to);

int count;
int main ()
{
	hanoi_tower(4,'A','B','C');
	printf("실행횟수는 %d입니다.\n", count);
	
	return 0;
}

int hanoi_tower(int n, char from, char tmp, char to)
{
	static int in_count = 0;
	count++;

	if(n==1)
	{
		printf("원판 1을 %c에서 %c으로 옮긴다\n",from,to);
		in_count++;
		printf("#%d\tn = 1, from = %c, tmp = %c, to = %c\n",in_count,from, tmp, to);
	}	
	else
	{
		hanoi_tower(n-1,from,to,tmp);
		printf("원판 %d을 %c에서 %c으로 옮긴다\n", n,from,to);
		in_count++;
		printf("#%d\tn = %d, from = %c, tmp = %c, to = %c\n", in_count, n, from, tmp, to);
		hanoi_tower(n-1,tmp,from,to);
	}

	return count;
}
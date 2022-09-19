#include <stdio.h>
int main()
{
	int money;
	int five;
	int one;
	int five_ten;
	int ten;

	printf("남은 돈이 얼마입니까?");
	scanf("%d", &money);

	five = money / 500;
	one = (money % 500) / 100;
	five_ten = ((money % 500) % 100) / 50;
	ten = (((money % 500) % 100) % 50) / 10;

	printf("500원 %d개\n100원 %d개\n50원 %d개\n10원 %d개입니다", five, one, five_ten, ten);

	return 0;
}

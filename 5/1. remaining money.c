#include <stdio.h>
int main()
{
	int money;
	int five;
	int one;
	int five_ten;
	int ten;

	printf("���� ���� ���Դϱ�?");
	scanf("%d", &money);

	five = money / 500;
	one = (money % 500) / 100;
	five_ten = ((money % 500) % 100) / 50;
	ten = (((money % 500) % 100) % 50) / 10;

	printf("500�� %d��\n100�� %d��\n50�� %d��\n10�� %d���Դϴ�", five, one, five_ten, ten);

	return 0;
}

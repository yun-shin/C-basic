#include <stdio.h>
#include <stdlib.h>

int get_input();
int get_input2();
void save(int amount);
int get_input3();
void draw(int amount);

int money;

int main ()
{
	int x=0;
	int retry;
	int amount=0;
	while(1){
	x = get_input();
	if(x==1){
		amount = get_input2();
		save(amount);
	}
	else if(x==2){
		amount = get_input3();
		 draw(amount);
	}
	else
	{
		while(1){
			printf("메뉴를 선택하시오 : 저축(1)\t인출(2)");
			scanf("%d",&x);

		}
	}
	printf("계속하시겠습니까? 1/2");
	scanf("%d",&retry);
	if(retry == 1)
		continue;
	else 
		break;
	}
	return 0;
}
int get_input()
{
	int x;
	printf("메뉴를 선택하시오 : 저축(1)\t인출(2)");
	scanf("%d",&x);

	return x;
}

int get_input2()
{
	int x;
	printf("저축할 금액:  ");
	scanf("%d",&x);
	if(x<1)
	{
		while(1){
			printf("저축할 금액:  ");
			scanf("%d",&x);
		}
	}
	return x;
}

void save(int amount)
{
	money +=amount;
	printf("현재 잔액은 %d입니다.\n", money);
}

int get_input3()
{
	int x;
	printf("출금할 금액:  ");
	scanf("%d",&x);
	if(x<1)
	{
		while(1){
			printf("출금할 금액:  ");
			scanf("%d",&x);
		}
	}
	return x;
}

void draw(int amount)
{
	money -= amount;
	printf("현재 잔액은 %d입니다.\n", money);
}

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

char get_input1();
int get_input2();
void check1(char ans1);
int check2();
int check3(int ans2);
void check4(int number);

int seats[SIZE] = { 0 };
int main()
{
	char ans1;
	int ans2, i, number, x = 0;
	char n;

	while (1)
	{
		ans1 = get_input1();
		if (ans1 == 'y')
		{
			number = get_input2();
			check4(number);

			check1(ans1);
			for (i = 0; i<number; i++) {
				ans2 = check2();
				if (ans2 <= 0 || ans2 > SIZE)
				{
					printf("1���� 10������ ���ڸ� �Է��ϼ���\n");
					continue;
				}
				x = check3(ans2);
				if (x == 1)
					continue;

			}
		}
		else if (ans1 == 'n')
			return 0;
	}
	return 0;
}

char get_input1()
{
	char ans1;
	printf("�¼��� �����Ͻðڽ��ϱ�? (y or n)\t");
	scanf("%c", &ans1);
	fflush(stdin);
	return ans1;
}

int get_input2()
{
	int number;
	printf("�ο����� �Է����ּ���.\t");
	scanf("%d", &number);
	fflush(stdin);
	return number;
}

void check1(char ans1)
{
	int i;
	printf("--------------------------------------------\n");
	printf("   1   2   3   4   5   6   7   8   9   10\n");
	printf("--------------------------------------------\n");

	for (i = 0; i<SIZE; i++)
		printf("%d", seats[i]);
	printf("\n");

}

int check2()
{
	int ans2;
	printf("���° �¼��� �����Ͻðڽ��ϱ�\t");
	scanf("%d", &ans2);
	fflush(stdin);

	return ans2;
}

int check3(int ans2)
{
	int x = 1;
	if (seats[ans2 - 1] == 0)
	{
		seats[ans2 - 1] = 1;
		printf("����Ǿ����ϴ�.\n");
	}
	else
	{
		printf("�̹� ����� �ڸ��Դϴ�.\n");
		return x;
	}
}

void check4(int number)
{
	int i, x = 0;
	char n;
	for (i = 0; i<SIZE; i++)
	{
		if (seats[i] == 0)
			x++;
		else if (seats[i] == 1)
			x = 0;
	}
	if (x < number)
		printf("���ӵ� �ڸ��� �����ϴ�.\n");

	else if (x >= number)
		printf("���ӵ� �ڸ��� �ֽ��ϴ�.\n");
}

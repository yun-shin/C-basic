#include <stdio.h>
#define ALL_STUDENT 15

int get_integer_1();
int get_integer_2();
int get_integer_3();
void get_score(int score);
int get_average(int total);

int main()
{
	int number;
	int score;
	int count;
	int total = 0;
	int average;

	for(count = 0; count < ALL_STUDENT; count++)
	{
		number = get_integer_1();
		score = get_integer_2();
		total = total + score;
		printf("%d �л��� ������ %d���̰�", number, score);
		get_score(score);
	}

	average = get_average(total);

	printf("��ü �л����� %d�̰� ��ü ����� %d�� �Դϴ�.", ALL_STUDENT, average);

}

int get_integer_1()
{
	int x;
	printf("��ȣ�Է�:  ");
	scanf("%d",&x);
	while(1)
	{
		if(x<0)
		{
			printf("��ȣ�Է�:  ");
			scanf("%d",&x);
		}
		else
			break;
	}
	return  x;
}

int get_integer_2()
{
	int y;
	printf("����(100������):  ");
	scanf("%d",&y);
	while(1)
	{
		if(y<0 || y>100)
		{
			printf("����(100������):  ");
			scanf("%d",&y);
		}
		else
			break;
	}
	return  y;
}

void get_score(int score)
{
	switch(score/10)
	{
	case 10:
	case 9:
		printf("����� A�Դϴ�.\n");
		break;
	case 8:
		printf("����� B�Դϴ�.\n");
		break;
	case 7:
		printf("����� C�Դϴ�.\n");
		break;
	case 6:
		printf("����� d�Դϴ�.\n");
		break;
	default:
		printf("����� F�Դϴ�.\n");
	}
}

int get_average(int total)
{
	total = total / ALL_STUDENT;
	return total;
}
	
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
		printf("%d 학생의 점수는 %d점이고", number, score);
		get_score(score);
	}

	average = get_average(total);

	printf("전체 학생수는 %d이고 전체 평균은 %d점 입니다.", ALL_STUDENT, average);

}

int get_integer_1()
{
	int x;
	printf("번호입력:  ");
	scanf("%d",&x);
	while(1)
	{
		if(x<0)
		{
			printf("번호입력:  ");
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
	printf("점수(100점만점):  ");
	scanf("%d",&y);
	while(1)
	{
		if(y<0 || y>100)
		{
			printf("점수(100점만점):  ");
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
		printf("등급은 A입니다.\n");
		break;
	case 8:
		printf("등급은 B입니다.\n");
		break;
	case 7:
		printf("등급은 C입니다.\n");
		break;
	case 6:
		printf("등급은 d입니다.\n");
		break;
	default:
		printf("등급은 F입니다.\n");
	}
}

int get_average(int total)
{
	total = total / ALL_STUDENT;
	return total;
}
	
#include <stdio.h>
#include <stdlib.h>
#define ANSWER 100

int main()
{
	int answer = rand()%ANSWER;
	int guess;
	int tries = 0;
	do
	{
		printf("������ �����Ͽ� ���ÿ�: ");
		scanf("%d", &guess);
		tries++;
		if ( guess>0 && guess <= 100)
		{
			if ( guess > answer)
				printf("������ ������ �����ϴ�.\n");
			if (guess<answer)
				printf("������ ������ �����ϴ�,\n");
		}
		else
			printf("�߸��� ���� �Է��ϼ̽��ϴ�.\n");
	} while (guess !=answer);
	printf("%d", answer);

	printf("�����մϴ�. �õ�Ƚ��=%d\n", tries);
	return 0;
}
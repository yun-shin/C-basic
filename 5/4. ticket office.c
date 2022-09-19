#include <stdio.h>

int main()
{
	int age;
	int time;

	printf("현재 시간과 나이를 입력하시오. (시간, 나이)\n");
	scanf("%d %d", &time, &age);

	while (!(time<=24 && time>=0))
	{
		printf("현재 시간을 다시 입력하시오.\n");
		scanf("%d", &time);
	}

	if (age<0)
		printf("당신은 사람이 아니군요 !\n");   

	else
	{
		if (age<3 && age>0)
			printf("3세 미만은 무료입장입니다. !\n");     

		else
		{
			if (time>17)
				printf("요금은 10,000원 입니다.\n");    

			else
			{
				if (age<=12 || age>=65)
					printf("요금은 25,000원 입니다.\n");   

				else 
					printf("요금은 34,000원 입니다.\n");           
			}
		}
	}

	return 0;
}

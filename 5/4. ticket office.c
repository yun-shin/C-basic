#include <stdio.h>

int main()
{
	int age;
	int time;

	printf("���� �ð��� ���̸� �Է��Ͻÿ�. (�ð�, ����)\n");
	scanf("%d %d", &time, &age);

	while (!(time<=24 && time>=0))
	{
		printf("���� �ð��� �ٽ� �Է��Ͻÿ�.\n");
		scanf("%d", &time);
	}

	if (age<0)
		printf("����� ����� �ƴϱ��� !\n");   

	else
	{
		if (age<3 && age>0)
			printf("3�� �̸��� ���������Դϴ�. !\n");     

		else
		{
			if (time>17)
				printf("����� 10,000�� �Դϴ�.\n");    

			else
			{
				if (age<=12 || age>=65)
					printf("����� 25,000�� �Դϴ�.\n");   

				else 
					printf("����� 34,000�� �Դϴ�.\n");           
			}
		}
	}

	return 0;
}

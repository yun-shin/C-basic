#include <stdio.h>

int main()
{
	int x;
	int y=0;
	
	printf("���� �Է����ּ���.\n");
	scanf("%d", &x);

	if(x>0)
	{
		y = x % 2;
		switch (y)
		{
		case 0:
			printf("%d", x/2);
			break;
		case 1:
			printf("%d", x*3+1);
			break;
		}
	}
	else
		printf("����� �ƴմϴ�.");
	
	return 0;
}

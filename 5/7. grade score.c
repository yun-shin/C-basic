#include <stdio.h>
int main ()
{
	int midterm;
	int last;
	int homework;
	int attendance;
	int total;
	int x;

	printf("�߰���� ������ �Է��Ͻÿ�. (�ִ� 30��)\n");
	scanf("%d", &midterm);
	printf("�⸻��� ������ �Է��Ͻÿ�. (�ִ� 30��)\n");
	scanf("%d", &last);
	printf("������ ������ �Է��Ͻÿ�. (�ִ� 30��)\n");
	scanf("%d", &homework);
	printf("�⼮������ �Է��Ͻÿ�. (�ִ� 10��)\n");
	scanf("%d", &attendance);

	if((midterm > 30 && last > 30 && homework > 30 && attendance > 10) || (midterm < 0 && last < 0 && homework < 0 && attendance < 0))
	{
		printf("�߸��� ���Դϴ�.\n");
		return 0;
	}

	total = midterm + last + homework + attendance;
	x = total / 10;

	switch (x)
	{

	case 10:
	case 9:
		printf("A");
		break;
	case 8:
		printf("B");
		break;
	case 7:
		printf("C");
	case 6:
		printf("D");
		break;
	default:
		printf("F");
		break;
	}

	return 0;
}
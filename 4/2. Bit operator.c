// int���� ������ ��Ʈ �����ڸ� ����Ͽ��� 2�� ������ ��ȯ�ϴ� ���α׷�
#include <stdio.h>

int main ()
{ 
	int input;
	int result = 0;
	
	printf("������ �Է��ϼ���: ");
	scanf("%d", &input);

	result = ~input + 1;
	printf("2�� ����: %d", result);

	return 0;
}
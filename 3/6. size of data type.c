/* �ڷ����� ũ�⸦ �˾ƺ��� ���α׷� */
#include <stdio.h>

int main ()
{
	int x;
	printf("���� x�� ũ��: %d\n", sizeof(x));		 // ���� x�� ũ��

	printf("char���� ũ��: %d\n", sizeof(char));	 // char���� ũ��
	printf("int���� ũ��: %d\n", sizeof(int));		 // int���� ũ��
	printf("short���� ũ��: %d\n", sizeof(short));	 // short���� ũ��
	printf("long���� ũ��: %d\n", sizeof(long));	 // long���� ũ��
	printf("float���� ũ��: %d\n", sizeof(float));	 // float���� ũ��
	printf("double���� ũ��: %d\n", sizeof(double)); // double���� ũ��

	return 0;
}

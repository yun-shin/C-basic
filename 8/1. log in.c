#include <stdio.h>
#include <stdlib.h>
#define SUCCESS 1
#define FAIL 2
#define LIMIT 4
int check(int id, int password);
int get_input();
int get_input2();

int main()
{
	int id, password, result;

	while(1)
	{
		id = get_input();
		password = get_input2();
		result = check(id, password);
		if(result == SUCCESS)
			break;
	}
	printf("�α��� ���� !");
	return 0;
}

int get_input ()
{
	int id;
	printf("id:____\b\b\b\b");
	scanf("%d", &id);
	return id;
}

int get_input2()
{
	int password;
	printf("password:____\b\b\b\b");
	scanf("%d", &password);
	return password;
}
int check(int id, int password)
{
	int super_id = 1234;					// ���̵�� ��й�ȣ�� ����ƽ�� �ʿ䰡 ����.
	int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if(try_count >= LIMIT)
	{
		printf("Ƚ���ʰ�\n");
		exit(1);
	}
	if(id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}
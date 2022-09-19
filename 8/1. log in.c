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
	printf("로그인 성공 !");
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
	int super_id = 1234;					// 아이디와 비밀번호는 스테틱이 필요가 없다.
	int super_password = 5678;
	static int try_count = 0;

	try_count++;
	if(try_count >= LIMIT)
	{
		printf("횟수초과\n");
		exit(1);
	}
	if(id == super_id && password == super_password)
		return SUCCESS;
	else
		return FAIL;
}
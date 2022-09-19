#include <stdio.h>

int get_integer();
int combination(int n, int r);
long factorial (int n);

int main()
{
	int a,b;

	a = get_integer();
	b = get_integer();

	printf("C(%d, %d) = %d\n", a, b, combination(a,b));
	return 0;
}

int combination(int n, int r)
{
	return (factorial(n)/(factorial(r) * factorial(n-r)));
}

int get_integer()
{
	int n;

	printf("정수를 입력하시오: ");
	scanf("%d", &n);
	// n*=-1
	while(1){
		if(n<0 || n>12){
			printf("정수를 입력하시오: ");
			scanf("%d", &n);
		}
		else
			break;
	}
	return n;
}

long factorial(int n)
{
	int i;
	long result = 1;

	for(i=1; i<=n; i++)
		result *= i;


	return result;
}
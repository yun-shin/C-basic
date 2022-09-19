#include <stdio.h>

int main()
{
	int x;
	int y = 0;
	int z = 0;
	int m;
	int n;
	int w=0;

	printf("범위를 정해주세요. :");
	scanf("%d %d", &m, &n);
	printf("몇배수의 합을 구할건지 알려주세요. :");
	scanf("%d", &x);

	while (w<=n)
	{
		w = y*x;
		z=z+w;
		y++;
		if (w<m)
			z=0;
	}
	z=z-w;
	printf("답은 %d입니다.", z);
	return 0;
}
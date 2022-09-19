#include <stdio.h>

int main()
{
	int two;
	int three;
	int five;
	int two_number=0;
	int three_number=0;
	int five_number=0;


	for(five=5; five<=50; five+=5)
	{
		for(three=3; three<=30; three+=3)
		{
			for(two=2; two<=20; two+=2)
			{
				if(two + three + five == 81)
				{
					two_number = two / 2;
					three_number = three / 3;
					five_number = five / 5;				
					printf("2g : %d\t\t3g : %d\t\t5g : %d\n\n", two_number, three_number, five_number);
				}
			}
		}
	}
	return 0;
}
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#define NUMBER_OF_TIME 15

void get_dice_face();

int number;
int main ()
{
	int i;

	for(i=0; i<NUMBER_OF_TIME; i++)
	get_dice_face();

}

void get_dice_face()
{
	int i=0;
	static int count=0;
	static int one=0;
	static int two = 0;
	static int three = 0;
	static int four  = 0;
	static int five  = 0;
	static int six  = 0;

	srand ( (unsigned)time(NULL) );
	while(i<100)
	{
		number = rand()%6+1;
		if(number == 1)
			one++;
		else if(number == 2)
			two++;
		else if(number == 3)
			three++;
		else if(number == 4)
			four++;
		else if(number == 5)
			five++;	
		else
			six++;
		i++;
	}
	count++;
	printf("#%d\t%d %d %d %d %d %d\n\n", count, one, two, three, four, five, six);
}
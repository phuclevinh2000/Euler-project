#include <stdio.h>
#include <math.h>


/// Find the sum of all the multiples of 3 or 5 below 1000.

int Sum(void);

int main(void)
{
	printf("The sum of all the multiplies of 3 or 5 below 1000 is %d", Sum());	//print function
}

int Sum(void)		//Sum function
{
	long int InputOne, InputTwo, InputThree, Sum;
	InputOne = 3;
	InputTwo = 5;
	InputThree = 15;		//must minus the common multiples of 3 and 5
	Sum = 0;
	while (InputOne < 1000)
	{
		Sum += InputOne;	//sum of 3,6,9,...
		InputOne += 3;
	}
	while (InputTwo < 1000)
	{
		Sum += InputTwo; //sum of 5,10,15,..
		InputTwo += 5;
	}
	while (InputThree < 1000)
	{
		Sum -= InputThree;
		InputThree += 15;
	}
	//printf("%ld", Sum);
	return Sum;
}

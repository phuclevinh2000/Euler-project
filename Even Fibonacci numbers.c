#include <stdio.h>
#include <math.h>

/// <summary>
/// Euler 2
/// </summary>
/// <returns></returns>
int Sum(void);
int main()
{
	printf("The sum of the even-valued terms is %d", Sum());
}

int Sum(void)
{
	int First, Second, Third, SumEven;
	First = 1;	//three first numbers of Fibo
	Second = 2;
	SumEven = 0;
	while (First <= 4000000)
	{
		Third = Second;
		Second += First;
		First = Third;
		if (First % 2 == 0)
		{
			SumEven += First;
		}
	}
	return SumEven;
}

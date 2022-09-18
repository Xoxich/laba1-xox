#include <stdio.h>

int main()
{
	float cs ,ss;
	printf("Enter circle square = ");
	scanf_s("%f", &cs);
	printf("Enter square square = ");
	scanf_s("%f", &ss);
	if (4 * (cs / 3.14) > ss)
	{
		printf("the circle will not fit in the square\n");
	}
	else
	{
		printf("the circle will fit in the square\n");
	}
	if (4 * (cs / 3.14) < ss)
	{
		printf("the square will not fit in the circle");
	}
	else
	{
		printf("the square will fit in the circle");
	}
	return 0;
}
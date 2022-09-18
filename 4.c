#include<stdio.h>

int main()
{
	char x;
	double a, b;
	printf("decimeter-d\nkilometer-k\nmeter-M\nmillimeter-m\ncentimeter-c\n");
	printf("Enter the number : ");
	scanf_s("%lf", &a);
	scanf_s("%c", &x);
	if (x == 'd')
	{
		b = a / 10;
		printf("In meters: %lf", b);
	}
	else if (x == 'k')
	{
		b = a * 1000;
		printf("In meters: %lf", b);
	}
	else if (x == 'M')
	{
		b = a;
		printf("In meters: %lf", b);
	}
	else if (x == 'm')
	{
		b = a / 1000;
		printf("In meters: %lf", b);
	}
	else if (x == 'c')
	{
		b = a / 100;
		printf("In meters: %lf", b);
	}
	return 0;
}
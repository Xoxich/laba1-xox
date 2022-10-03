#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Enter first number = ");
	scanf_s("%i", &a);
	printf("Enter first number = ");
	scanf_s("%i", &b);
	printf("Enter third number = ");
	scanf_s("%i", &c);
	if (a == b || a == c || b == c) printf("triangle is ravnobedrenniy\n");
	else printf("triangle is not ravnobedrenniy\n");
	return 0;
}
#include <stdio.h>

int main()
{
	int a{}, b{};
	printf("Enter first number = ");
	scanf_s("%i", &a);
	printf("Enter first number = ");
	scanf_s("%i", &b);
	if (a == b) 
		printf("triangle is ravnobedrenniy");
	else if (a != b)
		printf("triangle is not ravnobedrenniy");
	return 0;
}
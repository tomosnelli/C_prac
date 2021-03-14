#include <stdio.h>

float Keep_number;
float result;

int convert(float x);


int main()
{
	printf("Enter your temperature with a C or F after the number.\n");
	printf("Type Number: ");
	scanf("%f", &Keep_number);

	result = convert(Keep_number);
	printf("%.2f\n")
}

int convertF(float x)
{
	float F;
	F = (x * 9/5) + 32;
	return F;
}

int convertC(float x)
{
	float C;
	C = (x - 32) * 5/9
	return 0;
}	

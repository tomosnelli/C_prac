#include <stdio.h>


//--begin--var
int choice;
float F;
float C;
float result;
//--end--var


//--begin--functions
int convert_to_F(float x);
int convert_to_C(float x);
//--end--functions



int main()
{
	printf("C to F(0) or F to C(1)?");
	printf("Type your choice: ");
	scanf("%d", &choice);

	if(!choice)
	{
		printf("Type your C temperature: ");
		scanf("%f", &C);

		result = convert_to_F(C);
		printf("%.2fC is %.2fF\n", C, result);
	}
	else
	{
		printf("Type your F temperature: ");
		scanf("%f", &F);

		result = convert_to_C(F);
		printf("%.2fF is %.2fC\n", F, result);
	}
}		

int convert_to_F(float x)
{
	float F;
	F = (x * 9/5) + 32;
	return F;
}

int convert_to_C(float x)
{
	float C;
	C = (x - 32) * 5/9;
	return C;
}

#include <stdio.h>

double number1 = 0.0;
double number2 = 0.0;
char operation = 0;

int main()
{
	printf("Enter a simple expression with 2 operands and one binary operator.\n");
	printf("Type Expression: ");
	scanf("%lf %c %lf", &number1, &operation, &number2);

	printf("%lf %c %lf\n", number1, operation, number2);
	
	switch(operation)
	{
		case '+':
			printf("Answer is %.2lf\n", number1 + number2);
			break;
		
		case '-':
			printf("Answer is %.2lf\n", number1 - number2);
			break;

		case '*':
			printf("Answer is %.2lf\n", number1 * number2);
			break;
		
		case '/':
			if(number2 == 0)
				printf("\n\n\aDivision by 0 error\n");
			else
				printf("Answer is %.2lf\n", number1 / number2);
			break;

		case '%':
			if((long)number2 == 0)
				printf("\n\n\aDivision by 0 error!\n");
			else
				printf("Answer is %ld", (long)number1 % (long)number2);
				break;

		default:
			printf("\n\n\aIllegal operation\n");
			break;
	}
	return 0;
}

#include <stdio.h>

double data[99];
double sum = 0.0;
double sign = 1.0;
int j = 0;

int main()
{
	for(size_t i = 0 ; i < sizeof(data) /sizeof(double) ; ++i)
	{
		j = 2*(i+1);
		data[i] = 1.0 / (j * (j + 1) * (j + 2));
		sum += sign * data[i];
		sign = -sign;
	}
	
	printf("The result is %.4lf\n", 4.0 * sum + 3.0);
	printf("The result is an approximation of pi, isn't that interesting?\n");

	return 0;
}

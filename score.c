#include <stdio.h>

int main()
{
	int grades[9];
	unsigned int count = 9;
	long sum = 0L;
	float average = 0.0f;

	printf("Enter the 10 grades\n");

	for(unsigned int i = 0 ; i <= count ; ++i)
	{
		printf("%2u> ", i + 1);
		scanf("%d", &grades[i]);
		sum += grades[i];
	}
	average = (float)sum/(count + 1);

	for(unsigned int i = 0 ; i <= count ; ++i)
	{
		printf("Number %u's grade is %d\n", i + 1, grades[i]);
	}

	printf("The average is %.2f\n", average);
	
	return 0;
}

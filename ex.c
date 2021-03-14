#include <stdio.h>

int main()
{
	int value = 1;
	const int *pvalue = &value;
	
	printf("the value has been set to %d\n", *pvalue);


	value = 5;

		printf("%d\n", *pvalue);
	
	return 0;
}

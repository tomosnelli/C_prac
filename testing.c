#include <stdio.h>

int main()
{
	for(unsigned int i = 1 ; i <= 5 ; ++i)
		printf("*");

	for(unsigned int i = 1 ; i <= 3 ; ++i)
	{
		printf("\n*");
			for(unsigned int j = 1 ; j <= 3 ; ++j)
			{
				printf(" ");
			}
		printf("*");
	}
	printf("\n");
	for(unsigned int i = 1 ; i <= 5 ; ++i)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}

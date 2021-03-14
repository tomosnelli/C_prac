#include <stdio.h>

//var
unsigned int width = 0;
unsigned int height =0;
const unsigned int MIN_SIZE = 3;
//var


int main()
{
	printf("Specify the width and height(mininum of %u): ", MIN_SIZE);
	scanf("%u %u", &width, &height);

	if(width < MIN_SIZE)
	{
		printf("\nWidth %u is below mininum value. Setting to %u", width, MIN_SIZE);
		width = MIN_SIZE;
	}
	
	for(unsigned int i = 0 ; i < width ; ++i)
	{
		printf("*");
	}

	for(unsigned int i = 0 ; i < height -2 ; ++i)
	{
		printf("\n*");

		for(unsigned int j = 0 ; i < width - 2 ; ++i)
		{
			printf(" ");
		}

		printf("*");
	}

	printf("\n");

	for(unsigned int i = 0; i < width ; ++i)
	{
		printf("*");
	}
	printf("\n");
	return 0;
}


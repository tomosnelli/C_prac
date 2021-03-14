#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define BUFF_MAX 201

char buff[BUFF_MAX];
int letter_count = 0;
int number_count = 0;
int cap_count		 = 0;
int low_count		 = 0;
size_t i = 0;

int main()
{
	printf("Enter a string to be tested.\nMaximum of %d numbers.\nEnter: ", BUFF_MAX);
	if(!fgets(buff, 200, stdin))
	{
		printf("Error reading string.\n");
		return 1;
	}

	while(buff[i])
	{
		if(isalpha(buff[i]))
			++letter_count;
		else if(isdigit(buff[i]))
			++number_count;
		if(isupper(buff[i]))
			++cap_count;
		if(islower(buff[i]))
			++low_count;
		++i;
	}

		
	printf("\nYou Entered %s", buff);

	for(unsigned int i = 0 ; (buff[i] = (char)toupper(buff[i])) != '\0' ; ++i);

	printf("\nThe String has %d letters, %d numbers, %d caps and %d lowers\n", letter_count, number_count, cap_count, low_count);
		
	printf("\nConverted to upper is\n%s", buff);

	return 0;
}

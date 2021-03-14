#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 51

char *token;
char usr_input[MAX];
char delimiter[] = " \";:.,)(";

int main()
{
	printf("Enter a string to be put through the strtok function.\nType String: ");

	fgets(usr_input, 50, stdin);
	
	printf("Your Entered\n%s\n\n", usr_input);

	token = strtok(usr_input, delimiter);

	puts(token);

	while(token != NULL)
	{
		token = strtok(NULL, delimiter);
		
		if(token != NULL)
		{
			puts(token);
		}
	}

	printf("\nTokenize complete.\n");

	return 0;
}

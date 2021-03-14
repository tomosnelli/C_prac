#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define TEXT_LEN 100
#define SUBSTR_LEN 40


int main()
{
	char text[TEXT_LEN];
	char substring[SUBSTR_LEN];

	printf("Enter the string to be searched (less than %d characters):\n", TEXT_LEN);
	fgets(substring, TEXT_LEN, stdin);

	printf("Enter the string sought (less than %d characters):\n", SUBSTR_LEN);
	fgets(substring, SUBSTR_LEN, stdin);

	for(int i = 0 ; (text[i] = (char)toupper(text[i])) != '\0' ; ++i);
	for(int i = 0 ; (substring[i] = (char)toupper(substring[i])) != '\0' ; ++i);

	printf("The string %s found in the first.\n", ((strstr(text, substring) == NULL)? "was not" : "was"));

	return 0;
}

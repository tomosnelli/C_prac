#include <stdio.h>
#include <string.h>

int main()
{
	unsigned int limite = 201;
	char buf[limite];
	char delimiter[] = " ";

	printf("Enter a string. It will tokenize it. Note that words over %u will be truncated.\nType String: ", limite - 1);
	fgets(buf, 200, stdin);

	printf("\n");
	printf("You Entered: ");
	puts(buf);

	printf("\n\nThis is what it looks like when tokenized.\n");

	char *token = strtok(buf, delimiter);
	while (token != NULL)
	{
		printf("[ %s ]", token);
		printf("\n");
		token = strtok(NULL, delimiter);
	}

	return 0;
}

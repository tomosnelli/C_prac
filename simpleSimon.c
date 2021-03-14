#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main()
{
	char another_game = 'Y';
	const unsigned int DELAY = 1;
	bool correct = true;

	printf("To Play Simple Simon, ");
	printf("watch the screen for a sequence of digits.\n");
	printf("watch carefully, as the digits are only displayed for ");
	printf("%u second%s\n", DELAY, DELAY > 1 ? "s!" : "!");

	printf("Once the numbers are shown, You will be prompt to type.\n");
	printf("\nWhen you do, you must put spaces between the digits.\n");
	printf("Good luck!\nPress Enter to play\n");


	do
	{
		
	}
}

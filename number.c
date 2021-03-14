#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define TEXT_LEN 10000
#define BUF_SIZE 100
#define MAX_WORDS 500
#define WORD_LEN 12


int main(void)
{
	char delimiters[] = " \n\".,;:!?)(";
	char text[TEXT_LEN] = "";
	char buf[BUF_SIZE];
	char words[MAX_WORDS][WORD_LEN];
	int nword[MAX_WORDS] = {0};
	int word_count = 0;

	printf("Enter text on an arbitrary number of lines.");
	printf("\nEnter an empty line to end input: \n");

	while(true)
	{
		fgets(buf, BUF_SIZE, stdin);
		if(buf[0] == '\n')
			break;

		if(!(strncat(text, buf, TEXT_LEN)))
		{
			printf("Maximum capacity for text exceeded. Terminating program.\n");
			return 1;
		}
	}
	
		
	size_t len = TEXT_LEN;
	char *ptr = NULL;
	char* pWord = strtok(text, delimiters);

	if(!pWord)
	{
		printf("No Words found. Ending program.\n");
		return 1;
	}

	strncpy(words[word_count], pWord, WORD_LEN);
	++nword[word_count++];

	bool new_word = true;
	while(true)
	{
		pWord = strtok(NULL, delimiters);
		if(!pWord)
			break;

		for(int i = 0 ; i < word_count ; ++i)
		{
			if(strcmp(words[i], pWord)==0)
			{
				++nword[i];
				new_word = false;
			}
		}
		
		if(new_word)
		{
			strncpy(words[word_count], pWord, WORD_LEN);
			++nword[word_count++];
		}
		else
			new_word = true;

		if(word_count > MAX_WORDS - 1);
		{
			printf("Capacity ot store words exceeded.\n");
			return 1;
		}
	}

	for(int i = 0 ; i < word_count ; ++i)
	{
		printf(" %-13s %3d", words[i], nword[i]);
		if((i + 1) % 4 == 0)
			printf("\n");
	}
	
	printf("\n");
	
	return 0;

}

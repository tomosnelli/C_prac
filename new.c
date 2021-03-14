#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define TEXT_LEN 10000 //maximum number of letters to be sotered
#define BUF_SIZE 1000  //buffer size
#define MAX_WORDS 500  //maximum type of words that can be stored
#define WORD_LEN 15    //maximum letters for each word


int main()
{

	char delimiters[] = " \n\".,;:!?)(";
  char text[TEXT_LEN] = "";
  char buff[BUF_SIZE];
  char words[MAX_WORDS][WORD_LEN];
  int  nword[MAX_WORDS] = {0};
  int  word_count = 0;


	printf("Enter a string. \\n can be used as well.");
	printf("\nType String: ");

	while(true)
	{
		fgets(buff, BUF_SIZE, stdin);
		if(buff[0] == '\n')
			break;

		if(!(strncat(text, buff, TEXT_LEN)))
		{
			printf("\nMaximum capacity for text exceeded. Program Terminated.\n");
			return 1;
		}
	}

	size_t len = TEXT_LEN;
	char *ptr = NULL;
	char *pWord = strtok(text, delimiters);

	if(!pWord)
	{
		printf("\nNo words in pointer variable \"pWord\" found. Check code again\n");
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
			if(strcmp(words[i], pWord) == 0)
			{
				++nword[i];
				new_word = false;
			}
		}

		if(new_word)
		{
			strncpy(words[word_count], pWord, WORD_LEN);
			++nword[word_count];
		}
		else
			new_word = true;

		if(word_count > MAX_WORDS-1)
		{
			printf("Capacity to store words exceeded.\n");
			return 1;
		}
	}
	
	for(int i = 0 ; i < word_count ; ++i)
	{
		printf("	%-13s %3d", words[i], nword[i]);
		if((i + 1) % 4 == 0)
			printf("\n");
	}

	printf("\n");

	return 0;
}

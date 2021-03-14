//Program Tic-Tac-Toe
#include <stdio.h>

int main()
{
	int player = 0;
	int winner = 0;
	int choice = 0;
	unsigned int row = 0;
	unsigned int column = 0;

	char board[3][3] = 
	{
		{'1', '2', '3'},
		{'4', '5', '6'},
		{'7', '8', '9'}
	};
	
	//The main game loop. with 9 turns if no winners
	
	for(unsigned int i = 0 ; i < 9 && winner == 0 ; ++i)
	{
		printf("\n");
		printf(" %c ║ %c ║ %c \n", board[0][0], board[0][1], board[0][2]);
		printf("═══╬═══╬═══\n");
		printf(" %c ║ %c ║ %c \n", board[1][0], board[1][1], board[1][2]);
		printf("═══╬═══╬═══\n");
		printf(" %c ║ %c ║ %c \n", board[2][0], board[2][1], board[2][2]);

		player = i%2 + 1;


		do
		{
			printf("Player %d, please enter a valid square number \nfor where you want to place your %c : ", player,(player == 1) ? 'X' : 'O');

			scanf("%d", &choice);

			row = --choice/3;
			column = choice % 3;
		}while(choice < 0 || choice > 8 || board[row][column] > '9');

		//Insert players symbol
		board[row][column] = (player == 1)?'X' : 'O';

		//Check rows and columns for a winnig line

		if((board[0][0]==board[1][1] && board[0][0]==board[2][2]) ||
			 (board[0][2]==board[1][1] && board[0][2]==board[2][0]))
			winner = player;
		else
		{
			//Check row and columns for a winning line
			for(unsigned int line = 0 ; line <= 2 ; ++line)
			{
				if((board[line][0] == board[line][1] && board[line][0] == board[line][2]) ||
						(board[0][line] == board[1][line] && board[0][line] == board[2][line]))
					winner = player;
			}
		}
	}

	 //Code for output 	
	printf("\n");
	printf(" %c ║ %c ║ %c \n", board[0][0], board[0][1], board[0][2]);
	printf("═══╬═══╬═══\n");
	printf(" %c ║ %c ║ %c \n", board[1][0], board[1][1], board[1][2]);
	printf("═══╬═══╬═══\n");
	printf(" %c ║ %c ║ %c \n", board[2][0], board[2][1], board[2][2]);

	if(winner)
		printf("\nCongradulations, player %d, YOU ARE THE WINNER!\n", winner);
	else
		printf("\nDRAW\n");

	return 0;	
}

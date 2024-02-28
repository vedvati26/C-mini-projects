#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>
#include"tictactoe.h"

int main()
{
	char turn = 'X',board[]={'-' ,'-' ,'-' ,'-' ,'-' ,'-' ,'-' ,'-' ,'-' };
	bool game = true;
	int turnCount = 0;
	
	printf("\nWelcome To TIC TAC TOE!!\n");
	printf("Type -999 to exit\n");
	while(game)
	{
		displayTable(board);
		insert(board,&turn);
		turnCount++;
		
		if(checkWin(board))
		{
			displayTable(board);
			printf("%c wins!!",turn);
			exit(0);
		}
		
		if(checkDraw(turnCount))
		{
			displayTable(board);
			printf("\nDraw!!");
			exit(0);
		}
		swTurn(&turn);
	}
}

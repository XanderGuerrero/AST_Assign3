//FileName:		intput.c
//Project:		AST-assign3
//Author:		Alex Guerrero	
//Date:			february 23, 2014
//Description:	This file contains the functions responsible for input processing



//Include files
#include"AST-assign3.h"




//FunctionName: setCursorPosition()
//Description:  sets the cursor position to print to a desired location on the screen
//Parameters: void
//Return Values: none
void setCursorPosition( int *currentRow, int *currentColumn)
{
	while( kOne )
	{
		printf("enter row position\n");
		*currentRow = getNum();
		if( *currentRow > MAX_ROWS || *currentRow < 0 )
		{
			printf("cursor position is out of range\n");
			printf("Re-enter a cursor position\n");
		}
		else
		{
			break;
		}
	}
	while( kOne )
	{
		printf("enter column position\n");
		*currentColumn = getNum();
		if( *currentColumn > MAX_COLS || currentColumn < 0  )
		{
			printf("cursor position is out of range\n");
			printf("Re-enter a cursor position\n");
		}
		else 
		{
			break;
		} 
	}
}



//FunctionName: getNum
//Description:  gets user inputted numbers from the keyboard
//Parameters: void
//Return Values: number
int getNum(void)
{
	//array is 80 bytes in size and variable record stores the string
	char record[80] = {0};
	int number = 0;

	//fgets() is used to get a string from the keyboard
	fgets(record, sizeof(record), stdin);

	//extract a number from the string; sscanf() returns a number
    //corresponding with the number of items found in the string
    //if the user did not enter a number recognizable by the system,
    //set number to -1
	if( sscanf(record, "%d", &number) != 1 )
	{

		number = -1;
	}

	return number;
}
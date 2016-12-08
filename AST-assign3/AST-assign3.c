//FileName:		AST-assign3.c
//Project:		AST-assign3
//Author:		Alex Guerrero	
//Date:			february 23, 2014
//Description:	This program uses array linearization techniques to 
//				perform simple one to one video mapping to the console 
//				on a 40 column by 24 row screen.



//Include files
#include"AST-assign3.h"




int main( void )
{
	//Variables initiliaized
	char *string = NULL;
	int textCount = 0;
	int length = 0;
	int currentRow = 0;
	int currentColumn = 0;

	printf("enter a string.  This string will be placed at the users specified location\n");
	//create enough room equal to the video mapping array and get user input
	string = ( char* )malloc( sizeof( video ) );
	fgets( string, ( MAX_ROWS * MAX_COLS ), stdin );
	//pass the length of the string to variable for use in for loop
	length = strlen(string);
	//go through string and replace the '\n' with null
	for( textCount = 0; textCount < length; ++textCount )
	{
		if(string[ textCount ] == '\n' )
		{
			string[ textCount ] = '\0';
		}
	}
	//get users screen poition input
	setCursorPosition( &currentRow, &currentColumn );
	//copy users information into the video array and scroll the screen
	//if the data goes beyond the memory boundaries
	outputString( string, currentRow, currentColumn );
	//Displays the contents of the array
	displayVideoMemory();
	//clears the video array
	clearScreen();
	//displays video memeory to show the cleared array
	displayVideoMemory();

	getch();
	return 0;
}




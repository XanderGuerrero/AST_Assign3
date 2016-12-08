//FileName:		output.c
//Project:		AST-assign3
//Author:		Alex Guerrero	
//Date:			february 23, 2014
//Description:	This file contains the functions responsible for output to the console.



//Include files
#include"AST-assign3.h"


//FunctionName: clearScreen()
//Description:  clears the video memory
//Parameters: void
//Return Values: none
void clearScreen() 
{
	//variables initialized
	int element = 0;
	char *pVideo = *video;

	//blank the memory
	while( element < ( MAX_ROWS * MAX_COLS ) )
	{
		*(pVideo++) = ' ';
		++element;
	}
}



//FunctionName: outputString( char *string, int currentRow, int currentColumn )
//Description:  This functioncopies the user entered contents to the video array.  
//				If the data goes beyond the dimensions fo the array, the scroll srceen
//				is called to scroll by one line and continue writing the user input.
//Parameters: char *string, int currentRow, int currentColumn
//Return Values: void
void outputString( char *string, int currentRow, int currentColumn )
{
	//variables initialized
	char x = 0;
	char *pVideo = NULL;
	int vidOffset = 0;
	int currentVidOffset = 0;

	//calculate the video offset and assign to vidOffset
	vidOffset = currentRow * MAX_COLS + currentColumn;
	//get the address of the video array
	pVideo = &video[ 0 ][ 0 ];

	//wile the string character is not zero
	while( string[ x ] != '\0' )
	{
		//assign a string character to the video array
		pVideo[ vidOffset++ ] = string[ x ];
		//if the data to be written to is scheduled to be written outside the array 
		//dimensions, 
		if( vidOffset >= ( MAX_ROWS * MAX_COLS ))
		{
			//current position minus one row calculated and assigned back to vidOffset
			currentVidOffset = ( vidOffset - MAX_COLS );
			vidOffset = currentVidOffset;
			//scroll the screen
			scrollScreen();	
		}
		//next character
		++x;
	}
}



//FunctionName: scrollScreen()
//Description:  This function scrolls the screen if the data goes beyond the video array dimensions.
//				The data is scrolled one line up.
//Parameters: void
//Return Values: number
void scrollScreen()
{
	//variables initialized
	int i = 0;
	int j = 0;
	int vidOffset = 0;
	char *pVideoSource = NULL;
	char *pVideoDestination = NULL;
	int count = 0;

	//set address to the pointers
	pVideoSource = &video[1][0];
	pVideoDestination = &video[0][0];
	
	while(count < ((MAX_ROWS - 1) * MAX_COLS))
	{
		*(pVideoDestination++) = *pVideoSource++;
		++count;
	}
	while(count < (MAX_ROWS * MAX_COLS))
	{
		*pVideoDestination++ = ' ';
		++count;
	}
}



//FunctionName: getNum
//Description:  gets user inputted numbers from the keyboard
//Parameters: void
//Return Values: number
void displayVideoMemory(void)
{
	int i = 0;
	int j = 0;

	printf ("Video memory holds:\n");

	printf ("   ");
	for (i = 0; i < MAX_COLS; i++) {	// constant that needs definition
		if ((i % 10) == 0)
			printf ("%d", i / 10);
		else
			printf (" ");
	}	/* end for */
	printf ("\n");

	printf ("   ");
	for (i = 0; i < MAX_COLS; i++) {
		printf ("%d", i % 10);
	}	/* end for */
	printf ("\n");

	for (i = 0; i < MAX_ROWS; i++) {	// constant that needs definition
		printf ("%02d ", i);
		for (j = 0; j < MAX_COLS; j++) {
			printf ("%c", video[i][j]);	// private data member
		}
		printf ("\n");
	}
	printf ("\n\n");
}
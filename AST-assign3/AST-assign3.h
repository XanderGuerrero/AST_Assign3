//FileName:		AST-assign3.h
//Project:		AST-assign3
//Author:		Alex Guerrero	
//Date:			february 23, 2014
//Description:		This program uses array linearization techniques to 
//				perform simple one to one video mapping to the console 
//				on a 40 column by 24 row screen.



//include file
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<conio.h>


//Defined constants
#define kOne 1
#define MAX_COLS 40
#define MAX_ROWS 24


//global multi-dimensional array and variables
static char video[MAX_ROWS][MAX_COLS];



//disables a warning to allow the use of depreciated functions
#pragma warning( disable: 4996 )



//Defined constants
#define kOne 1
#define MAX_COLS 40
#define MAX_ROWS 24



//function protoytypes
int getNum(void);
void clearScreen( void );
void displayVideoMemory( void );
void outputString( char *string, int currentRow, int currentColumn );
void setCursorPosition( int *currentRow, int *currentColumn );
void scrollScreen();
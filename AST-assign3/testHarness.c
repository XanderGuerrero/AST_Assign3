//FileName:		testHarness.c
//Project:		AST-assign3
//Author:		Alex Guerrero	
//Date:			february 23, 2014
//Description:	



#include"AST-assign3.h"

int main (void)
{
	
	

	// test API #1
	// test if the text will first be outputed
	printf("set cursor position\n");
	setCursorPosition ();
	outputString ("top left corner");
	displayVideoMemory();
	clearScreen();	

	printf("set cursor position\n");
	setCursorPosition (12, 20);	// test API #2
	outputString ("here's some text in the middle of the screen");	// test API #3
	displayVideoMemory();
	// test API #2       
    // test if the screen will scroll to the next row
	setCursorPosition (35, 9);  // test API #2
	outputString ("here's text that will scroll the screen!");		// test API #3
	displayVideoMemory();
	    // test API #3       
    // test if the screen will scroll to the next row
    setCursorPosition (35, 9);       
    outputString ("here's text that will scroll the screen!");     
    displayVideoMemory();     

    // test API #4      
    // test what happens when text over lap
    setCursorPosition (3,0);       
    outputString ("This text is overlaping the first text!");     
    displayVideoMemory();     

    // test API #5
    // The memory should run out displating an error message
    setCursorPosition(38,25);
    outputString("The memory should be run out");
    displayVideoMemory();

    // test API #6
    // test if the after the clear screen is working and will wipe out the all the text
    clearScreen();   
    displayVideoMemory();
	return 0;
}

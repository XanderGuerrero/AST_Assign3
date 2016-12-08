# AST_Assign3
Advanced Software Techniques - Assignment 3: Efficiency with Pointers

Individual submission
Introduction
Many embedded systems and console-based environments treat output to the screen as memory
locations containing the display data (characters) and possible attributes. In these cases, video memory
is simply an array that has a one-to-one mapping to sequential locations on the video screen.
This assignment lets you explore some of the rudimentary requirements in systems that use video
memory.
Minimum Requirements
Implement a complete solution to the video simulation discussed in class (see lecture slides). You may
implement this as a C++ class or using C functions. (If using C++, implement the class with the video
memory, current row, and current column as private data members of the class.) Use the array
linearization (using pointers for extra efficiency) techniques discussed in the lecture wherever applicable
(this is the point of the assignment).
You will add one more method/function to your solution, DisplayVideoMemory(). The C++ method is
provided as an extra file with this assignment.
This function will allow you to output to the Windows console the current contents of your video
memory to prove your API functions are working correctly. You will note that we revert back to the array
processing here, as we need to know about our row/column offsets for the processing of the visual
output. This function will output the row and column offsets so that you can easily verify that your
algorithms are actually doing the work they are meant to do. This is a good example of a "test harness"
function - some code that helps you verify that your code is doing the right work.
Every algorithm needs test harness code. An example of a test harness is provided as an extra file with
this assignment. Consider it a MINIMAL test harness for your simulation. It is expected that your testing
goes beyond this.
Make your video dimensions equal to 40 columns and 24 rows.
Please submit your solution to the D2L dropbox in a zipped folder

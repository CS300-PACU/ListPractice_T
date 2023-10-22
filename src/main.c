/****************************************************************************
 File name:  	main.c
 Author:			YOUR NAME
 Date:				10/23/23
 Class:				CS 300
 Assignment:	List Practice
 Purpose:			Practice List
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>

typedef struct ListElement* ListElementPtr;
typedef struct ListElement 
{
	char data;
	ListElementPtr psNext;
} ListElement;

typedef struct List* ListPtr;
typedef struct List
{
	ListElementPtr psHead;
} List;


void addToFront (ListPtr psList, char data);
void printEntireList (ListPtr psList);
int countOccurrences (ListPtr psList, char data);
void printOddLocationsInList (ListPtr psList);
void emptyList (ListPtr psList);

void runTests (ListPtr psList);

 /****************************************************************************
  Function:			main

  Description: 	Test the List

  Parameters:		argc - the number of command line arguments
              	argv - the actual command line arguments

  Returned:	 		EXIT_SUCCESS
  ****************************************************************************/
int main (int argc, char* argv[]) {
	List sList;

	// DO NOT EDIT MAIN
	sList.psHead = NULL;

	printf("----Empty List----\n");
	runTests (&sList);

	addToFront (&sList, '!');
	addToFront (&sList, '0');
	addToFront (&sList, '0');
	addToFront (&sList, '3');
	addToFront (&sList, 's');
	addToFront (&sList, 'c');

	printf("----FULL  List----\n");
	runTests (&sList);

	emptyList (&sList);

	printf("----Empty List----\n");
	runTests (&sList);


  return EXIT_SUCCESS;
}

 /****************************************************************************
  Function:			runTests

  Description: 	Run all the tests on the List

  Parameters:		psList - the List

  Returned:	 		none
  ****************************************************************************/
void runTests (ListPtr psList)
{
	// DO NOT EDIT THIS FUNCTION
	printf("\nEntire List: ");
	printEntireList (psList);

	printf("\n0 appears %d times!\n", countOccurrences(psList, '0'));

	printf("\nOdd Locations in List: ");
	printOddLocationsInList (psList);

}

 /****************************************************************************
  Function:			addToFront

  Description: 	Add a new element as the front of the list
								psHead will point to the new element.

  Parameters:		psList - the List
								data - the character to add

  Returned:	 		none
  ****************************************************************************/
void addToFront (ListPtr psList, char data)
{
}

 /****************************************************************************
  Function:			printEntireList

  Description: 	Print each character in the list on one line.
								Print a newline at the end.

  Parameters:		psList - the List

  Returned:	 		none
  ****************************************************************************/
void printEntireList (ListPtr psList)
{
}

 /****************************************************************************
  Function:			countOccurrences

  Description: 	Count the occurrences of the paramter data in the List
								return the count

  Parameters:		psList - the List
								data - the character to find

  Returned:	 		int - the number of occurrences
  ****************************************************************************/
int countOccurrences (ListPtr psList, char data)
{
	return 0;
}

 /****************************************************************************
  Function:			printOddLocationsInList

  Description: 	Print the character in the ODD LOCATIONS in the list 
								on one line.  Print a newline at the end.
								psHead is location 1, and so is ODD

  Parameters:		psList - the List

  Returned:	 		none
  ****************************************************************************/
void printOddLocationsInList (ListPtr psList)
{
}

 /****************************************************************************
  Function:			emptyList

  Description: 	Free all the ListElements. Set psHead to NULL

  Parameters:		psList - the List

  Returned:	 		none
  ****************************************************************************/
void emptyList (ListPtr psList)
{
}


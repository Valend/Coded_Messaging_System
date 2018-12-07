/*************************************************************************
* Name:			Turcotte_Memory.cpp
* Author:		Justin Turcotte
* Description:	Implementation that Expands on allocation, building in error detection
* Date:			18/12/03
*************************************************************************/

/*************************************************************************
*                            Includes		                             *
*************************************************************************/
#include "Turcotte_Memory.h"
#include <stdio.h>
#include <malloc.h>

/*************************************************************************
*                            Definitions		                         *
*************************************************************************/

//calloc memory and check for errors
int t_AssignMemory(void** location, int size)
{
	*location = (void*)calloc(1, size);
	if ((*location) == NULL)
	{
		printf("\nMEMORY ERROR: Unable to allocate space of %d!\n", size);
		return -1;
	}

	return 0;
}

//realloc memory and check for errors
int t_ReassignMemory(void** location, int size)
{
	*location = (void*)realloc(*location, size);
	if (!(*location))
	{
		printf("\nMEMORY ERROR: Unable to allocate space of %d!\n", size);
		return -1;
	}

	return 0;
}
/*************************************************************************
* Name:			Turcotte_Memory.h
* Author:		Justin Turcotte
* Description:	Interface that Expands on allocation, building in error detection
* Date:			18/12/03
*************************************************************************/

#ifndef TURCOTTE_MEMORY_H
#define TURCOTTE_MEMORY_H

/*************************************************************************
*                            Includes		                             *
*************************************************************************/

/*************************************************************************
*                            Prototypes		                             *
*************************************************************************/

int t_AssignMemory(void** location, int size);		//calloc memory and check for errors
int t_ReassignMemory(void** location, int size);	//realloc memory and check for errors

#endif

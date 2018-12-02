/* 	Echo_Message.cpp
 *	Implementation to handle message errors returned from functions
 *
 *  Coded Messaging System - Echo
 *  ESE 3: Engineering Projects III
 *
 *  By: Justin Turcotte
 * 		Daniel Dreise
 *		Ramtin Alikhani
 *
 *  Thursday, November 30, 2018
 */

#include "Echo_Input.h"
#include "Echo_Error.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

//functions

//will handle any errors passed from other functions
void error(int(*func)(void))
{
	func();	//runs necessary function then it can use return to handle errors

	return;
}
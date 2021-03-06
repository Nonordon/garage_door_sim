/*
 * StoppedButtonClosing.cpp
 *
 *  Created on: Feb 25, 2018
*      Author: Emily Filmer, Zachary Campanella
 */

#include "StoppedButtonClosing.h"
#include "GarageDoorController.h"

StoppedButtonClosing::StoppedButtonClosing(std::queue<char>* inQueue) : Transition(inQueue){
    // TODO Auto-generated constructor stub
	nextState = 1; //Closing

}

StoppedButtonClosing::~StoppedButtonClosing() {
    // TODO Auto-generated destructor stub
}

// guard, accept, event

bool StoppedButtonClosing::guard(void* GDC)
{
	// If direction set to 0 (previously Opening) return true
	if (((GarageDoorController*)GDC)->direction == 0)
		return true;
	else
		return false;
}

bool StoppedButtonClosing::accept(char* ev)
{
	if (*ev == 'r')
	{
		return true;
	} else
	{
		return false;
	}
}

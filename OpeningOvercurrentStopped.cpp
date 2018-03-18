/*
 * OpeningOvercurrentStopped.cpp
 *
 *  Created on: Feb 25, 2018
 *      Author: Emily Filmer, Zachary Campanella
 */

#include "OpeningOvercurrentStopped.h"
#include "InputScanner.h"

OpeningOvercurrentStopped::OpeningOvercurrentStopped(std::queue<char>* inQueue) : Transition(inQueue) {
	// TODO Auto-generated constructor stub
	nextState = 4; //Stopped

}

OpeningOvercurrentStopped::~OpeningOvercurrentStopped() {
	// TODO Auto-generated destructor stub
}

// guard, accept, event

bool OpeningOvercurrentStopped::accept(char* ev)
{
	if (*ev == 'm')
	{
		return true;
	} else
	{
		return false;
	}
}

void OpeningOvercurrentStopped::event(GarageDoorController* GDC)
{
    // set direction to 'previously opening' (0)
    GDC->direction = 0;
}

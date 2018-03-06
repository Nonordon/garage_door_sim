/*
 * Closing.h
 *
 *  Created on: Feb 25, 2018
 *      Author: filme
 */

#ifndef CLOSING_H_
#define CLOSING_H_
#include "State.h"
#include "GarageDoorController.h"
#include <pthread.h>

class Closing: public State {
public:
	Closing();
	virtual ~Closing();
	void entry();
	void exit();
	void reaction(void* GDC);
	pthread_t timer;
	static bool exited;
};

#endif /* CLOSING_H_ */

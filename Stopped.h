/*
 * Stopped.h
 *
 *  Created on: Feb 25, 2018
 *      Author: filme
 */

#ifndef STOPPED_H_
#define STOPPED_H_
#include "State.h"

class Stopped: public State {
public:
	Stopped();
	virtual ~Stopped();
	void entry();
};

#endif /* STOPPED_H_ */

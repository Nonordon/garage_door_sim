/*
 * Closed.h
 *
 *  Created on: Feb 25, 2018
 *      Author: Emily Filmer, Zachary Campanella
 */

#ifndef CLOSED_H_
#define CLOSED_H_
#include "State.h"

class Closed: public State {
public:
	Closed(Output* inOutput);
	virtual ~Closed();
	void entry();
};

#endif /* CLOSED_H_ */

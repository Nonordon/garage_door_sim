/*
 * Opening.h
 *
 *  Created on: Feb 25, 2018
 *      Author: filme
 */

#ifndef OPENING_H_
#define OPENING_H_
#include "State.h"

class Opening: public State {
public:
	Opening();
	virtual ~Opening();
	void entry();
	void reaction();
	static bool exited;
	void exit();
};

#endif /* OPENING_H_ */

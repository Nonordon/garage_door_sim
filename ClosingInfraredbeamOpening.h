/*
 * ClosingInfraredbeamOpening.h
 *
 *  Created on: Feb 25, 2018
 *      Author: filme
 */

#ifndef CLOSINGINFRAREDBEAMOPENING_H_
#define CLOSINGINFRAREDBEAMOPENING_H_
#include "Transition.h"

class ClosingInfraredbeamOpening: public Transition {
public:
	ClosingInfraredbeamOpening();
	virtual ~ClosingInfraredbeamOpening();
	bool accept();
};

#endif /* CLOSINGINFRAREDBEAMOPENING_H_ */

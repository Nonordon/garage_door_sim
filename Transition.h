/*
 * Transition.h
 *
 *  Created on: Feb 20, 2018
 *      Author: Nonordon
 */

#ifndef TRANSITION_H_
#define TRANSITION_H_
//#include "State.h"

class Transition {
public:
    Transition();
    virtual ~Transition();
    int nextState;
    virtual bool guard() {return true;}
    virtual bool accept() {return true;}
    virtual void event() {}
};

#endif /* TRANSITION_H_ */

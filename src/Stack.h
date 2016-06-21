/*
 * Stack.h
 *
 *  Created on: junio 20, 2016
 *      Author: raydelto y lisbey mella
 */

#ifndef STACK_H_
#define STACK_H_
#include "Element.h"
class Stack
{
	private:
		Element* _last;
	public:
		void push(Element*);
		Element* pop();
		Stack();
};

#endif /* STACK_H_ */

/*
 * Element.h
 *
 * Created on: junio 20, 2016
 *      Author: raydelto y lisbey mella
 */

#ifndef ELEMENT_H_
#define ELEMENT_H_
#include <string>
class Element
{
	private:
		std::string _name;
		Element* _next;

	public:
		Element(std::string name);
	//This means that Stack can access directly to Element's private members
	friend class Stack;
};

#endif /* ELEMENT_H_ */

/*
 * Stack.h
 *
 *  Created on: May 18, 2014
 *      Author: josh
 */
//Linked stack just for the fun of it! This has no application in the address book.
#ifndef STACK_H_
#define STACK_H_

#include "node.h"
class Stack
{
public:
	Stack();
	void push(std::string, std::string); //add node to stack with string contact and phone number
	node* pop();//remove last node (LIFO) and return the node so the data get be obtained
	node* get_link(node*);
	void set_next(node*);
private:
	node* top;
};




#endif /* STACK_H_ */
/*
 * todo
 * handle when user tries to pop from an empty stack
 */

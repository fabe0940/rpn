/* stack.cpp
 *
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7       Mason Fabel
 * 02/20                      x86_64 GNU/Linux      fabe0940@vandals.uidaho.edu
 *
 * Stack class implementation.
 *-----------------------------------------------------------------
 */ 

#include <iostream>

#include "stack.h"
#include "list.h"
#include "utility.h"

using namespace std;

/* Default constructor */
Stack::Stack(void) {
	return;
}

/* Destructor */
Stack::~Stack(void) {
	return;
}

/* Print the contents of the stack */
void Stack::print(void) {
	list.print();

	return;
}

/* Return the size of the stack */
int Stack::getSize(void) {
	return list.getSize();
}

/* Push an item onto the stack */
void Stack::push(double d) {
	list.addToFront(d);

	return;
}

/* Pop an item off of the stack */
double Stack::pop(void) {
	return list.removeFromFront();
}

/* Peeek at the top of the stack */
double Stack::peek(void) {
	double result;

	/* Get the top item from the stack */
	if(getSize()) {
		result = pop();
	} else {
		error((char*) "Stack::peek - no items on stack");
	}

	/* Return the item to the top of the stack */
	push(result);

	return result;
}

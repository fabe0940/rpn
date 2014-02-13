#include <iostream>

#include "stack.h"
#include "list.h"

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
	result = pop();

	/* Return the item to the top of the stack */
	push(result);

	return result;
}

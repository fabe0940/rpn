/* stack.h
 *
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7       Mason Fabel
 * 02/20                      x86_64 GNU/Linux      fabe0940@vandals.uidaho.edu
 *
 * Stack class definition.
 *-----------------------------------------------------------------
 */ 

#ifndef _STACK_H_
#define _STACK_H_

#include "list.h"

class Stack {
	public:
		Stack(void);
		~Stack(void);
		void print(void);
		int getSize(void);
		void push(double d);
		double pop(void);
		double peek(void);
	private:
		List list;
};

#endif

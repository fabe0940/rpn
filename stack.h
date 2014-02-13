#ifndef _STACK_H_
#define _STACK_H_

#include "list.h"

class Stack {
	public:
		Stack(void);
		~Stack(void);
		void print(void);
		int size(void);
		void push(double d);
		double pop(void);
		double peek(void);
	private:
		List list;
};

#endif

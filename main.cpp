#include <cstdlib>
#include <iostream>

#include "stack.h"

using namespace std;

int main(int argc, char** argv) {
	int i;
	Stack stack;

	stack.print();
	cout << endl;

	for(i = 0; i < 10; i++) {
		cout << "pushing " << i << endl;
		stack.push(i);
	}
	stack.print();
	cout << endl;

	cout << "peeking " << stack.peek() << endl << endl;

	for(i = 0; i < 10; i++) {
		cout << "popping " << stack.pop() << endl;
	}
	cout << endl;

	stack.print();
	cout << endl;

	exit(0);
}

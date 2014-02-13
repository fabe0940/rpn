#include <cstdlib>
#include <iostream>

#include "list.h"

using namespace std;

int main(int argc, char** argv) {
	int i;
	List list;

	list.print();
	cout << endl;

	for(i = 0; i < 10; i++) {
		list.addToFront(i);
	}
	list.print();
	cout << endl;

	for(i = 0; i < 10; i++) {
		cout << list.removeFromFront() << endl;
	}
	cout << endl;

	list.print();
	cout << endl;

	exit(0);
}

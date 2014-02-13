#include <cstdlib>
#include <iostream>

#include "stack.h"

using namespace std;

void usage(char* name);
void error(char* msg);

Stack operands;

/* Run an interactive RPN calculator */
int main(int argc, char** argv) {
	/* Check for the proper amount of arguments */
	if(argc != 1) {
		usage(argv[0]);
		exit(0);
	}

	exit(0);
}


/* Print usage information */
void usage(char* name) {
	cout << "Usage: " << name << endl;

	return;
}

/* Print an error message and exit */
void error(char* msg) {
	cerr << "Error: " << msg << " - exiting." << endl;

	exit(1);
}

#include <cstdlib>
#include <cstring>
#include <cmath>
#include <iostream>
#include <string>
#include <sstream>

#include "constants.h"
#include "stack.h"
#include "utility.h"

using namespace std;

Stack operands;

int DEBUG = 0;

/* Run an interactive RPN calculator */
int main(int argc, char** argv) {
	int arg;
	int running;
	int isNumeric;
	double op1;
	double op2;
	string strBuffer;
	string input;
	stringstream* buffer = NULL;

	/* Parge arguments */
	for(arg = 1; arg < argc; arg++) {
		/* Print argument being parsed */
		if(DEBUG) log(argv[arg]);

		if(!strcmp(argv[arg], "-h") || !strcmp(argv[arg], "--help")) {
			if(DEBUG) log((char*) "help option detected");
			help(argv[0]);
			exit(0);
		} else if(!strcmp(argv[arg], "-v") || !strcmp(argv[arg], "--version")) {
			if(DEBUG) log((char*) "version option detected");
			version(argv[0]);
			exit(0);
		} else if(!strcmp(argv[arg], "-D") || !strcmp(argv[arg], "--debug")) {
			if(DEBUG) log((char*) "debug option detected");
			DEBUG = 1;
		} else {
			if(DEBUG)  {
				log((char*) "unknown option:");
				log(argv[arg]);
			}
			usage(argv[0]);
			exit(0);
		}
	}

	/* Initialize application */
	op1 = 0;
	op2 = 0;
	input = "";
	isNumeric = 0;
	running = 1;

	/* Print informative header */
	cout << "RPN Calculator v" << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_REV << " by Mason Fabel" << endl;

	/* Main loop */
	while(running) {
		/* Print status */
		if(operands.getSize()) {
			cout << "RPN " << operands.peek() << " > ";
		} else {
			cout << "RPN (empty) > ";
		}

		/* Get input */
		getline(cin, strBuffer);
		delete buffer;
		buffer = new stringstream;
		*buffer << strBuffer;

		/* Parse input */
		input = "";
		while(*buffer >> input) {
			cout << "INPUT: " << input << endl;

			switch(input[0]) {
				case '.':
				case '0':
				case '1':
				case '2':
				case '3':
				case '4':
				case '5':
				case '6':
				case '7':
				case '8':
				case '9':
					isNumeric = 1;
					break;
				case '-':
					isNumeric = (strlen(input.c_str()) != 1);
					break;
				default:
					isNumeric = 0;
			}

			/* Act on input */
			if(isNumeric) {
				operands.push(atof(input.c_str()));
			} else {
				if(!strcmp(input.c_str(), "+")) {
					op1 = operands.pop();
					op2 = operands.pop();
					operands.push(op2 + op1);
				} else if(!strcmp(input.c_str(), "-")) {
					op1 = operands.pop();
					op2 = operands.pop();
					operands.push(op2 - op1);
				} else if(!strcmp(input.c_str(), "*")) {
					op1 = operands.pop();
					op2 = operands.pop();
					operands.push(op2 * op1);
				} else if(!strcmp(input.c_str(), "/")) {
					op1 = operands.pop();
					op2 = operands.pop();
					operands.push(op2 / op1);
				} else if(!strcmp(input.c_str(), "sq")) {
					op1 = operands.pop();
					operands.push(op1 * op1);
				} else if(!strcmp(input.c_str(), "sqrt")) {
					op1 = operands.pop();
					operands.push(sqrt(op1));
				} else if(!strcmp(input.c_str(), "dup")) {
					operands.push(operands.peek());
				} else if(!strcmp(input.c_str(), "swap")) {
					op1 = operands.pop();
					op2 = operands.pop();
					operands.push(op1);
					operands.push(op2);
				} else if(!strcmp(input.c_str(), "ps")) {
					cout << "stack contents:" << endl;
					operands.print();
				} else if(!strcmp(input.c_str(), "quit")) {
					running = 0;
				} else {
					log((char*) "unknown operator:");
					log((char*) input.c_str());
				}
			}
		}
	}

	exit(0);
}

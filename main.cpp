#include <cstdlib>
#include <cstring>
#include <iostream>
#include <string>

#include "stack.h"
#include "utility.h"

using namespace std;

Stack operands;

int DEBUG = 0;

/* Run an interactive RPN calculator */
int main(int argc, char** argv) {
	int arg;
	int running;
	string input;

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
	running = 1;

	/* Main loop */
	while(running) {
		/* Get input */
		cin >> input;

		/* Parse input */
		cout << input[0] << endl;

		/* Act on input */
		running = input[0] != 'q';
	}

	exit(0);
}

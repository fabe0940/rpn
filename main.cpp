#include <cstdlib>
#include <cstring>
#include <iostream>

#include "stack.h"

using namespace std;

void usage(char* name);
void help(char* name);
void version(char* name);
void error(char* msg);
void log(char* msg);

const int VERSION_MAJOR = 0;
const int VERSION_MINOR = 0;
const int VERSION_REV = 0;

Stack operands;

int DEBUG = 0;

/* Run an interactive RPN calculator */
int main(int argc, char** argv) {
	int i;

	/* Parge arguments */
	for(i = 1; i < argc; i++) {
		/* Print argument being parsed */
		if(DEBUG) log(argv[i]);

		if(!strcmp(argv[i], "-h") || !strcmp(argv[i], "--help")) {
			if(DEBUG) log("help option detected");
			help(argv[0]);
			exit(0);
		} else if(!strcmp(argv[i], "-v") || !strcmp(argv[i], "--version")) {
			if(DEBUG) log("version option detected");
			version(argv[0]);
			exit(0);
		} else if(!strcmp(argv[i], "-D") || !strcmp(argv[i], "--debug")) {
			if(DEBUG) log("debug option detected");
			DEBUG = 1;
		} else {
			if(DEBUG)  {
				log("unknown option:");
				log(argv[i]);
			}
			usage(argv[0]);
			exit(0);
		}
	}

	exit(0);
}


/* Print usage information */
void usage(char* name) {
	cout << "Usage: " << name << endl;

	return;
}

/* Print help information */
void help(char* name) {
	usage(name);

	cout << endl;
	cout << "Options:" << endl
		 << "  -h, --help            Print this message and exit" << endl
		 << "  -v, --version         Print version information and exit" << endl
		 << "  -D, --debug           Turn debugging mode on" << endl;

	return;
}

/* Print version information */
void version(char* name) {
	cout << name << " version " << VERSION_MAJOR << "." << VERSION_MINOR << "." << VERSION_REV << endl
		 << endl
		 << "Written by Mason Fabel" << endl;

	return;
}

/* Print an error message and exit */
void error(char* msg) {
	cerr << "Error: " << msg << " - exiting." << endl;

	exit(1);
}

/* Print a message to stdout */
void log(char* msg) {
	cout << msg << endl;

	return;
}

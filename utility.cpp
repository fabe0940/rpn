#include <cstdlib>
#include <iostream>

#include "constants.h"
#include "utility.h"

using namespace std;

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

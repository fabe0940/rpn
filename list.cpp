/* list.cpp
 *
 * Mason Fabel                fabe0940@vandals.uidaho.edu
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7
 * 02/20                      x86_64 GNU/Linux 
 *
 * Linked list class implementation.
 *-----------------------------------------------------------------
 */

#include <cstdlib>
#include <iostream>

#include "list.h"

using namespace std;

/* Default constructor */
List::List(void) {
	/* Create a blank list */
	size = 0;
	head = NULL;

	return;
}

/* Destructor */
List::~List(void) {
	NodePtr node;
	NodePtr prev;

	/* Traverse the list deleting all nodes */
	node = head;
	while(node != NULL) {
		prev = node;
		node = node->next;
		delete prev;
	}

	return;
}

/* Print the contents of the list */
void List::print(void) {
	NodePtr node;

	/* Traverse and print the list */
	node = head;
	while(node != NULL) {
		cout << node->data << endl;
		node = node->next;
	}

	return;
}

/* Get the size of the list */
int List::getSize(void) {
	return size;
}

/* Add an item to the front of the list */
void List::addToFront(double d) {
	NodePtr node;

	/* Create a new node */
	node = new Node;
	node->data = d;
	node->next = head;

	/* Add the node to the list */
	head = node;

	/* Update list size */
	size++;

	return;
}

/* Remove an item from the front of the list */
double List::removeFromFront(void) {
	double result = 0;
	NodePtr node;

	/* Check for an empty list */
	if(size) {
		/* Items are in the list */

		/* Get the front node */
		node = head;
		result = node->data;

		/* Update the list */
		head = node->next;

		/* Delete the node */
		delete node;

		/* Update list size */
		size--;

	} else {
		/* Items are not in the list */

		/* Do nothing */
	}

	return result;
}

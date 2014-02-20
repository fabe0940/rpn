/* list.h
 *
 * Mason Fabel                fabe0940@vandals.uidaho.edu
 * CS 121 Section 2 Bolden    g++ (GCC) 4.4.7
 * 02/20                      x86_64 GNU/Linux 
 *
 * Linked list class definition.
 *-----------------------------------------------------------------
 */

#ifndef _LIST_H_
#define _LIST_H_

class List {
	public:
		List();
		~List();
		void print(void);
		int getSize(void);
		void addToFront(double d);
		double removeFromFront(void);
	private:
		struct node {
			double data;
			struct node* next;
		};
		typedef struct node Node;
		typedef Node* NodePtr;
		int size;
		NodePtr head;
};

#endif

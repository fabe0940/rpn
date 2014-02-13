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
		typedef sturct node Node
		typedef Node* NodePtr;
		int size;
		NodePtr head;
};

#endif

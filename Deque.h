#include <iostream>
using namespace std;
class Deck {
public:
	Deck();
	Deck(int);
	bool isEmpty();
	bool isFull();
	bool insertFront(int);
	bool removeFront();
	bool insertBack(int);
	bool removeBack();
	void updateTail();
	void print();
	void deleteAll();
	friend ostream& operator<<(ostream& inputStream, const Deck& d);
private:
	struct Node {
		Node();
		Node(int val) {
			next = 0;
			value = val;
		}
		Node* next;
		int value;
	};
	Node* head = 0;
	Node* tail = head;
};

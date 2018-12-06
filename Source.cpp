#include <iostream>

using namespace std;

class Deck {
public:
	Deck();
	Deck(int);
	bool isEmpty();
	bool isFull();
	bool insertFront(int);
	bool removeFront(int&);
	bool insertBack(int);
	bool removeBack(int&);
	void updateTail();
	void print();
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

	Deck::Deck() {

	}

	void Deck::updateTail() {
		Node *temp = head;
		while (temp->next) {
			temp = temp->next;
		}
		tail = temp;
	}

bool Deck::insertFront(int a) {
	Node *tmp = new Node(a), *temp;
	
	if (head != NULL) {
		temp = head;
		head = tmp;
		head->next = temp;
		return true;
	} else {
		head = tmp;
		return true;
	}
	return false;
}

bool Deck::insertBack(int a) {
	Node *tmp = new Node(a), *temp;
	updateTail();

	if (tail) {
		temp = tail;
		tail = tmp;
		temp->next = tail;
		return true;
	} else {
		head = tmp;
		return true;
	}
	return false;
}
void Deck::print() {
	Node* a = head;
	while (head != NULL) {
		cout << head->value << endl;
		head = head->next;
	}
}

int main() {
	Deck* deck = new Deck();
	for (int i = 0; i <= 10; i++) {
		deck->insertFront(i);
	}
	for (int i = 100; i < 120; i++)
	{
		deck->insertBack(i);
	}
	deck->print();
	system("PAUSE");
}
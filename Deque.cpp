#include <iostream>
#include "Deque.h"

using namespace std;



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
	}
	else {
		head = tmp;
		return true;
	}
	return false;
}

bool Deck::removeFront() {
	Node *nxt = head->next;
	if (head != NULL) {
		delete head;
		head = nxt;
		return true;
	}
	else {
		cout << "Nothing at front" << endl;
		return false;
	}

}

bool Deck::insertBack(int a) {
	Node *tmp = new Node(a), *temp;
	updateTail();

	if (tail != NULL) {
		temp = tail;
		tail = tmp;
		temp->next = tail;
		return true;
	}
	else {
		head = tmp;
		return true;
	}
	return false;
}

bool Deck::removeBack() {
	Node *nxt = head->next;
	if (tail != NULL) {
		delete tail;
		tail = nxt;
		return true;
	}
	else {
		cout << "List is empty" << endl;
		return false;
	}
}
void Deck::print() {
	Node* a = head;
	while (head != NULL) {
		cout << head->value << endl;
		head = head->next;
	}
}

bool Deck::isEmpty() {
	if (head == NULL) {
		return true;
	}
	else {
		return false;
	}
}

bool Deck::isFull() {
	if (head == tail) {
		return true;
	}
	else {
		return false;
	}
}

ostream& operator<<(ostream& inputStream, const Deck& d) {
	//Couldn't get this bit working so i made a print method instead;
}
void Deck::deleteAll() {
	Node *n = head->next;
	while (head != NULL) {
		delete head;
		head = n;
	}
}
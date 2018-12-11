#include <iostream>
#include "Deque.h"
using namespace std;

int main() {
	Deck* deck = new Deck();
	for (int i = 0; i <= 10; i++) {
		deck->insertFront(i);
	}
	for (int i = 20; i <= 40; i++)
	{
		deck->insertBack(i);
	}


	deck->removeFront();
	deck->removeBack();


	deck->print();
	deck->deleteAll();

//Something is off with the ->next pointer for the tail in removeBack
//It's stopping the code below to be executed

	cout << "Deck is empty: " << std::noboolalpha << deck->isEmpty() << endl;
	cout << "Deck is full: " << std::noboolalpha << deck->isFull() << endl;
	system("PAUSE");
}
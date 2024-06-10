#pragma once

#include <iostream>

template <class T>
class Node {
public:
	T value;
	Node<T>* next;

	// Constructor
	Node(T value) {
		this->value = value;
		this->next = nullptr;
	}
};

template <class T>
class SingleLinkedList {
private:
	Node<T>* head;
public:
	// G1 - Constructor for SingleLinkedList
	SingleLinkedList() {
		this->head = nullptr;
	}

	// G2 - Destructor for SingleLinkedList
	~SingleLinkedList() {
		while (this->head != nullptr) {
			Node<T>* temp = this->head->next;
			delete head;
			this->head = temp;
		}
	}

	// G5 - Operator += (that ads a value to that links and returns a self reference)
	SingleLinkedList& operator+=(T value) {
		Node<T>* temp = new Node<T>(value);
		Node<T>* temp_p = this->head;
		if (this->head == nullptr)
			this->head = temp;
		else {
			while (temp_p->next != nullptr)
				temp_p = temp_p->next;
			temp_p->next = temp;
		}
		return *this; // Returns a self reference
	}

	// G6 - Method: print that receives a pointer to a function that is called for every value in the list
	void print(void (*func)(const T&)) {
		Node<T>* temp_p = this->head;
		while (temp_p != nullptr) {
			func(temp_p->value);
			temp_p = temp_p->next;
		}
		printf("\n");
	}

	// G7 - Operator && that checks if a value exists in the list
	bool operator&&(T value) {
		Node<T>* temp_p = this->head;
		while (temp_p != nullptr) {
			if (temp_p->value == value) return true;
			temp_p = temp_p->next;
		}
		return false;
	}

	// G8 - Method: pop_first() that returns the first element in the list
	T pop_first() {
		Node<T>* temp = this->head;
		this->head = this->head->next;
		T return_value = temp->value;
		delete temp;
		return return_value;
	}

	// G9 - A cast operator to bool that returns true if the list contains at least one element
	operator bool() const {
		return this->head != nullptr;
	}
};
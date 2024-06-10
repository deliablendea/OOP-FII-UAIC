#include "Value.h"

// Constructor
Value::Value(int value) {
	this->value = value;
}

// Destructor
Value::~Value() {

}

// Method: print()
void Value::print() {
	printf("%d", this->value);
}

// Method: compute()
int Value::compute() {
	return this->value;
}

// Method: get_children_count()
int Value::get_children_count() {
	return 0;
}

// Method: get_child()
Expression* Value::get_child(int i) {
	return nullptr;
}
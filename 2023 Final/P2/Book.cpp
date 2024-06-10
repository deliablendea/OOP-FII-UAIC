#include "Book.h"

Book::Book(int bprice, int bquantity, std::string btitle, std::string bauthor) {
	this->title = btitle;
	this->author = bauthor;
	this->price = bprice;
	this->quantity = bquantity;
}

std::string Book::GetType() {
	return "Book";
}

int Book::GetQuantity() {
	return this->quantity;
}

int Book::GetPrice() {
	return this->price;
}

void Book::Print() {
	std::cout << "Book (Title=" << this->title << ", Author=" << this->author << ") Price=" << this->price << " Quantity=" << this->quantity << '\n';
}
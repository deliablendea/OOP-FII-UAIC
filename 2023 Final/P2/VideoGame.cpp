#include "VideoGame.h"

VideoGame::VideoGame(int vprice, int vquantity, std::string vplatform, std::string vname) {
	this->platform = vplatform;
	this->name = vname;
	this->price = vprice;
	this->quantity = vquantity;
}

std::string VideoGame::GetType() {
	return "VideoGame";
}

int VideoGame::GetQuantity() {
	return this->quantity;
}

int VideoGame::GetPrice() {
	return this->price;
}

void VideoGame::Print() {
	std::cout << "VideoGame (Platform=" << this->platform << ", Name=" << this->name << ") Price=" << this->price << " Quantity=" << this->quantity << '\n';
}
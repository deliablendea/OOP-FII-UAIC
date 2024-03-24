#include "Movie.h"

void Movie::set_name(string name) {
	this->Name = name;
}

string Movie::get_name() {
	return this->Name;
}

void Movie::set_year(int releaseyear) {
	this->ReleaseYear = releaseyear;
}

int Movie::get_year() {
	return this->ReleaseYear;
}

void Movie::set_score(double IMDBscore) {
	if (IMDBscore >= 1.0 && IMDBscore <= 10.0) this->IMDBScore = IMDBscore;
	else std::cout << "Invalid IMDB score. Must be between 1.0 and 10.0." << '\n';
}

double Movie::get_score() {
	return this->IMDBScore;
}

void Movie::set_length(int length) {
	this->Length = length;
}

int Movie::get_length() {
	return this->Length;
}

int Movie::get_passed_years() {
	int CurrentYear = 2024; // Assuming the current year is 2024.
	return CurrentYear - this->ReleaseYear;
}

void MovieSeries::init() {
	this->Count = 0;
}

void MovieSeries::add(Movie* movie) {
	if (this->Count < 16) this->movies[this->Count++] = movie;
	else std::cout << "MovieSeries is full. Cannot add more movies." << '\n';
}

void MovieSeries::print() {
	for (unsigned int i = 0; i < this->Count; i++)
		std::cout << "Movie " << i + 1 << ": " << this->movies[i]->get_name()
		<< " (" << this->movies[i]->get_year() << ")" << '\n'
		<< " | IMDB Score: " << this->movies[i]->get_score() << '\n'
		<< " | Length: " << this->movies[i]->get_length() << " minutes" << '\n'
		<< " | Years Passed: " << this->movies[i]->get_passed_years() << '\n' << '\n';
}

void MovieSeries::sort() {
	for (unsigned int i = 0; i < this->Count - 1; i++)
		for (unsigned int j = i + 1; j < this->Count; j++)
			if (this->movies[i]->get_passed_years() < this->movies[j]->get_passed_years()) {
				Movie* aux = this->movies[i];
				this->movies[i] = this->movies[j];
				this->movies[j] = aux;
			}			
}
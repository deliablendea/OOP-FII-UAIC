#pragma once

#include <iostream>
using std::string;

class Movie {
	string Name;
	int ReleaseYear, Length;
	double IMDBScore;
public:
	// Name of the Movie - Setter & Getter
	void set_name(string name);
	string get_name();

	// Release Year - Setter & Getter
	void set_year(int releaseyear);
	int get_year();

	// IMDB Score - Setter & Getter
	void set_score(double IMDBscore);
	double get_score();

	// Movie Length - Setter & Getter
	void set_length(int length);
	int get_length();

	// Passed Years
	int get_passed_years();
};

class MovieSeries {
	int Count;
	Movie* movies[16];
public:
	void init();
	void add(Movie* movie);
	void print();
	void sort();
};
#include "Functions.h"

int movie_compare_name(Movie Movie1, Movie Movie2) {
	if (Movie1.get_name() < Movie2.get_name())
		return -1;
	if (Movie1.get_name() == Movie2.get_name())
		return 0;
	if (Movie1.get_name() > Movie2.get_name())
		return 1;
}

int movie_compare_year(Movie Movie1, Movie Movie2) {
	if (Movie1.get_year() > Movie2.get_year())
		return -1;
	if (Movie1.get_year() == Movie2.get_year())
		return 0;
	if (Movie1.get_year() < Movie2.get_year())
		return 1;
}

int movie_compare_score(Movie Movie1, Movie Movie2) {
	if (Movie1.get_score() < Movie2.get_score())
		return -1;
	if (Movie1.get_score() == Movie2.get_score())
		return 0;
	if (Movie1.get_score() > Movie2.get_score())
		return 1;
}

int movie_compare_length(Movie Movie1, Movie Movie2) {
	if (Movie1.get_length() < Movie2.get_length())
		return -1;
	if (Movie1.get_length() == Movie2.get_length())
		return 0;
	if (Movie1.get_length() > Movie2.get_length())
		return 1;
}
int movie_compare_passed_years(Movie Movie1, Movie Movie2) {
	if (Movie1.get_passed_years() < Movie2.get_passed_years())
		return -1;
	if (Movie1.get_passed_years() == Movie2.get_passed_years())
		return 0;
	if (Movie1.get_passed_years() > Movie2.get_passed_years())
		return 1;
}
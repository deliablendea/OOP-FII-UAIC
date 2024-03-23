#include "Class.h"

void Student::Set_Name(char name[256]) {
	strcpy_s(this->Name, sizeof Name, name);
}

char* Student::Get_Name() {
	return this->Name;
}

void Student::Set_Math_Grade(float math) {
	this->Math = math;
}

float Student::Get_Math_Grade() {
	return this->Math;
}

void Student::Set_English_Grade(float english) {
	this->English = english;
}

float Student::Get_English_Grade() {
	return this->English;
}

void Student::Set_History_Grade(float history) {
	this->History = history;
}

float Student::Get_History_Grade() {
	return this->History;
}

float Student::Get_Average_Grade() {
	return (this->Math + this->English + this->History) / 3;
}
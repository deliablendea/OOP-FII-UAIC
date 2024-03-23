#pragma once

#include <iostream>
#include <cstring>

class Student {
	char Name[256];
	float Math, English, History, Average;
public:
	// Name - Setter & Getter
	void Set_Name(char name[256]);
	char* Get_Name();

	// Math - Setter & Getter
	void Set_Math_Grade(float math);
	float Get_Math_Grade();

	// English - Setter & Getter
	void Set_English_Grade(float english);
	float Get_English_Grade();

	// History - Setter & Getter
	void Set_History_Grade(float history);
	float Get_History_Grade();

	// Average Grade
	float Get_Average_Grade();
};
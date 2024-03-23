#include "Functions.h"

int Compare_by_Name(Student Students[2]) {
	if (strcmp(Students[0].Get_Name(), Students[1].Get_Name()) < 0)
		return -1;
	if (strcmp(Students[0].Get_Name(), Students[1].Get_Name()) == 0)
		return 0;
	if (strcmp(Students[0].Get_Name(), Students[1].Get_Name()) > 0)
		return 1;
}

int Compare_by_Math_Grade(Student Students[2]) {
	if (Students[0].Get_Math_Grade() < Students[1].Get_Math_Grade())
		return -1;
	if (Students[0].Get_Math_Grade() == Students[1].Get_Math_Grade())
		return 0;
	if (Students[0].Get_Math_Grade() > Students[1].Get_Math_Grade())
		return 1;
}

int Compare_by_English_Grade(Student Students[2]) {
	if (Students[0].Get_English_Grade() < Students[1].Get_English_Grade())
		return -1;
	if (Students[0].Get_English_Grade() == Students[1].Get_English_Grade())
		return 0;
	if (Students[0].Get_English_Grade() > Students[1].Get_English_Grade())
		return 1;
}

int Compare_by_History_Grade(Student Students[2]) {
	if (Students[0].Get_History_Grade() < Students[1].Get_History_Grade())
		return -1;
	if (Students[0].Get_History_Grade() == Students[1].Get_History_Grade())
		return 0;
	if (Students[0].Get_History_Grade() > Students[1].Get_History_Grade())
		return 1;
}

int Compare_by_Average_Grade(Student Students[2]) {
	if (Students[0].Get_Average_Grade() < Students[1].Get_Average_Grade())
		return -1;
	if (Students[0].Get_Average_Grade() == Students[1].Get_Average_Grade())
		return 0;
	if (Students[0].Get_Average_Grade() > Students[1].Get_Average_Grade())
		return 1;
}
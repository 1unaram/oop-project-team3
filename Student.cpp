/* Student Class */
#include <iostream>
#include <iomanip>

#include "Student.h"

using namespace std;

Student::Student(string name, string student_id, string birth_year, string department, string tel) {
	this->name = name;
	this->student_id = student_id;
	this->birth_year = birth_year;
	this->department = department;
	this->tel = tel;
}

void Student::printStudentInfo() {

	cout << left << setfill(' ') << setw(NAME_SIZE) << "Name" << " ";
	cout << left << setfill(' ') << setw(STUDENT_ID_SIZE) << "Student ID" << " ";
	cout << left << setfill(' ') << setw(DEPT_SIZE) << "Dept" << " ";
	cout << left << setfill(' ') << setw(BIRTH_SIZE) << "Birth Year" << " ";
	cout << left << setfill(' ') << setw(TEL_SIZE) << "Tel" << "\n";

	cout << left << setfill(' ') << setw(NAME_SIZE) << this->name << " ";
	cout << left << setfill(' ') << setw(STUDENT_ID_SIZE) << this->student_id << " ";
	cout << left << setfill(' ') << setw(DEPT_SIZE) << this->department << " ";
	cout << right << setfill(' ') << setw(BIRTH_SIZE + 6) << this->birth_year << " ";
	cout << left << setfill(' ') << setw(TEL_SIZE) << this->tel << "\n\n";

}

string Student::getName() {
	return this->name;
};
string Student::getStudentID() {
	return this->student_id;
};
string Student::getBirthYear() {
	return this->birth_year;
};
string Student::getDepartment() {
	return this->department;
};
string Student::getTel() {
	return this->tel;
};
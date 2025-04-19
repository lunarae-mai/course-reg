#include "Student.h"
float Student::getGPA() {
	return GPA;
}
Student::Student(int id, string name, int semester, string password) {
	this->ID = id;
	this->name = name;
	this->semester = semester;
	this->password = password;
}
void Student::setGPA(float GPA) {
	this->GPA = GPA;
}

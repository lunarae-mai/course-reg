#include "Student.h"
#include "Course.h"
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

string Student::get_password()
{
	return password;
}
void Student::drop_course(int id) {
    current_courses.erase(id);

}

#pragma once
#include <string>
#include<iostream>
#include <map>
#include<vector>
#include "Course.h"

using namespace std;
class Student
{
public:
	int ID;
	string name;
	string password;     
	int semester;

	map <int,Course> current_courses; // int (id of course )
	map <int, vector<Course>> completed_courses;//int (semester of the student when take the course for the report...)
	//list of courses(for completed and current)
	//bool variable to check the course had been completed or not(function checks for the grade>=60)
	Student(int id, string name, int semester, string password);
	float getGPA();
	void setGPA(float gpa);
	void search();
	void view_grades();
	void gen_report();
	void course_reg();
	void check_completed();//Antar
	float calc_gpa();
private:
	float GPA;
};


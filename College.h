#pragma once
#include <unordered_map>
#include <map>
#include<vector>
#include"Student.h"
#include "Course.h"
#include"Admin.h"
class College
{
public :
	College();

	unordered_map<int, Student> Students; //int: id
	map <int, vector<Course>> Courses; //int: semester
	unordered_map<string, Admin> Admins; //string: username

	void create_admin();
	void create_stud();
    void upload_course();
    void display(int s);

};


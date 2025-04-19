#pragma once
#include <string>
#include <vector>

using namespace std;
class Course
{
private:
	string name;
	float grade;// no admin
	char G;//no admin
	vector<string> prerequisite;
	//for now 

	//Available=== ( first or second semester)....in student odd even
	//array
   // bool true 

	int id;
	int credit_hours;
	string syllabus;//objective from course...
	string instructor_mail;
	int semester;// first or second
	bool completed;// no admin
public:
	Course();
	Course(string name, float grade, char g, int id, int credit_hours, string syllabus, string instructor_mail);
	void set_name(string name);
	void set_grade(float grade);
	void set_G(char g);
	void set_prerequisite(vector<string> prerequisite);
	void set_id(int id);
	void set_credit_hours(int credit_hours);
	void set_syllabus(string syllabus);
	void set_instructor_name(string instructor_name);
	void set_semester(int semester);
	void set_completed(bool completed);

	string get_name();
	float get_grade();
	char get_G();
	string get_prerequisite();
	int get_id();
	int get_credit_hours();
	string get_syllabus();
	string get_instructor_name();
	int get_semester();
	bool get_completed();



	bool has_prerequisite();
};


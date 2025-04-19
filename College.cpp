#include "College.h"
#include "Admin.h"

#include <iostream>
#include <string>
#include <unordered_map>


College::College() {}

void College::create_admin()
{
	string username;
	string password;
	
	cout << "Create Your username \n";
	cin >> username;
	if (Admins.find(username) != Admins.end()) //username already exists
		cout << "This username already exists \n";
	else
	{
	cout << "Create Your password\n";
	cin >> password;

	Admin new_admin (username, password);
	Admins.insert({ username, new_admin });

	cout << "Admin Created Succefully\n";
	}
	
}

void College::create_stud()
{
	int id;
	string name;
	string password;
	int semester;


	cout << "Please enter your ID \n";
	cin >> id;

	if (Students.find(id) != Students.end()) //id already exists
		cout << "This User already exists !!\n";
	else
	{
		cout << "Enter Your Name\n";
		cin >> name;
		cout << "Enter Your Semester\n";
		cin >> semester;
		cout << "Create Your password\n";
		cin >> password;

		Student new_stud (id, name, semester, password);
		Students.insert({ id, new_stud });

		cout << "Student Created Succefully\n";
	}


}
#include <iostream>
#include <string>
using namespace std;

class Admin
{
public :
	Admin(string username, string password);

private:
	string username;
	string password;


	void upload_course();
	void set_prerequisite();
	void manage_grades();


};


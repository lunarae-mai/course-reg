#include <iostream>
#include <string>
using namespace std;

class Admin
{
public :
	Admin(string username, string password);
	string get_password();

private:
	string username;
	string password;



	void set_prerequisite();
	void manage_grades();


};


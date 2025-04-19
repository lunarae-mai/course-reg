#include "Admin.h"
#include <string>
/*#include "Course.h"
#include "College.h"*/

Admin::Admin(string username, string password)
{
	this->username = username;
	this->password = password;
}

string  Admin::get_password() {
	return password;
}

/*Admin::Admin(const string& username, const string& password)
	: username(username), password(password)
{
}*/



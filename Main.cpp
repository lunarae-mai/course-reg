#include <iostream>
#include <string>

#include"Course.h"
#include"Admin.h"
#include"Student.h"
#include"College.h"
using namespace std;


// ask admin or stud  -> take choice AdmOrStud in a int 1/2 
// ask login or signup -> 
//  1.signup -> create adm/stud -> depend on the AdmOrStud -> tempt to login after
//  2.login -> if 1 -> take id and check in Students unordered map
// if 2 ->  take id and check in admins vector

void sign_up(int AdmOrStud);
void log_in(int AdmOrStud);

College *fcis = new College();
int main()
{
   
    return 0;
}



void sign_up(int AdmOrStud)
{
    if (AdmOrStud == 1)
        fcis->create_admin();
    else
        fcis->create_stud();
    log_in(AdmOrStud);
}

void log_in(int AdmOrStud)
{
    string username;
    int id;
    string password;

    if (AdmOrStud == 1)
    {
        cout << "Enter username\n";
        cin >> username;
        if (fcis->Admins.find(username) == fcis->Admins.end()) //user doesn't exist 
        {
            cout << "username not found \n";
            return;
        }
    }
    else
    {
        cout << "Enter your ID\n";
        cin >> id;
        if (fcis->Students.find(id) == fcis->Students.end()) //user doesn't exist 
        {
            cout << "ID not found \n";
            return;
        }
    }



    //cout << "Enter password";
    //do {
    //    cin >> password;
    //    if (fcis->Admins[username] == password )
    //    {
    //        cout << "Logged in Succefully\n";
    //        break;
    //    }
    //    else
    //    {
    //        cout << "Password Incorrect. Please Try Again\n";
    //    }
    //} while (true);


}
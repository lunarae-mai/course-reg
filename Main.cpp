#include <iostream>
#include <string>

#include"Course.h"
//#include"Admin.h"
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
   /*
    cout << "Admin 1 or Stud 2";
    int c1;
    cin >> c1;
    cout << "signup 1 or login 2";
    int c2;
    cin >> c2;

    if (c2 == 1) {
        sign_up(c1);
        log_in(c1);
    }
    else {
        log_in(c2);
    }*/
fcis->upload_course();

        fcis->display(3);



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
        auto it = fcis->Admins.find(username);
        if (it == fcis->Admins.end()) //user doesn't exist 
        {
            cout << "username not found \n";
            return;
        }

        else {
            cout << "Enter password";
            do {
                cin >> password;
               
                if (it->second.get_password() == password) {
                    cout << "Logged in Succefully\n";
                    break;
                }

                else
                {
                    cout << "Password Incorrect. Please Try Again\n";
                }
            } while (true);
        }
    }
    else
    {
        cout << "Enter your ID\n";
        cin >> id;
        auto it = fcis->Students.find(id);
        if (it == fcis->Students.end()) //user doesn't exist 
        {
            cout << "username not found \n";
            return;
        }

        else {
            cout << "Enter password";
            do {
                cin >> password;

                if (it->second.get_password() == password) {
                    cout << "Logged in Succefully\n";
                    break;
                }

                else
                {
                    cout << "Password Incorrect. Please Try Again\n";
                }
            } while (true);
        }
    }



}
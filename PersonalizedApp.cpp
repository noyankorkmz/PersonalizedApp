#include<iostream>

#include <Windows.h>

using namespace std;

struct Employee {
  int id;
  string username1;
  string department;
};

int main(int argc, char ** argv) {

  string username;
  string username2;
  string password2;
  int id1;
  string z;
  string email;
  string dep;
  string sys_username2 = "noyankorkmz";
  string sys_password2 = "1234noyan";
  string password;
  string search;
  string google = "https://www.google.com/search?q=";
  string strsearch;
  int secim;
  int r;
  string bitesadmin;
  string a;
  string g;
  string x;
  HWND hwnd = GetDesktopWindow();
  Employee emp1 = {
    10,
    "Emre Akkas",        //these are for official members that their username is theri id and they alredy defind in the system
    "System Software Engineer"
  };
  Employee emp2 = {
    11,
    "Sinem Senyurt Duyar",      //these are for official members that their username is theri id and they alredy defind in the system
    "Leader System Engineer"
  };
  Employee emp3 = {
    12,
    "Yasin Isik",            //these are for official members that their username is theri id and they alredy defind in the system
    "System Test Engineer"
  };
  while (true) {

    Employee * ptr = & emp1;
    Employee * ptr1 = & emp2;
    Employee * ptr2 = & emp3;

    if (argc == 3) {
      password2 = string(argv[2]);
      username2 = string(argv[1]);
    } else {
      cout << "1- Login 2- Sign In" << endl;
      cin >> g;
      if (g == "1") {
        cout << "Enter Username..." << endl;
        cin >> username2;
        cout << "Enter Password..." << endl;
        cin >> password2;
      } else if (g == "2") {
        cout << "Create a username" << endl;
        cin >> username;
        cout << "Create a password" << endl;
        cin >> password;
        cout << "ID: ";
        cin >> id1;
        cout << "Department: ";
        cin >> dep;
        cout << "Email Address: ";
        cin >> email;
        cout << "Username: " << username << endl;
        cout << "ID: " << id1 << endl;
        cout << "Department: " << dep << endl;
      } else if (g == "bitesadmin**") {       //admin login
        cout << "Admin Login" << endl;
      } else if (g == "emreakkas") {
        cout << "ID: " << ptr -> id << endl;
        cout << "User name: " << ptr -> username1 << endl;
        cout << "Department: " << ptr -> department << endl;
      } else if (g == "sinemsenyurtduyar") {
        cout << "ID: " << ptr1 -> id << endl;
        cout << "User name: " << ptr1 -> username1 << endl;
        cout << "Department: " << ptr1 -> department << endl;
      } else if (g == "yasinisik") {
        cout << "ID: " << ptr2 -> id << endl;
        cout << "User name: " << ptr2 -> username1 << endl;
        cout << "Department: " << ptr2 -> department << endl;
      } else {
        cout << "Wrong Selection..." << endl;
        cout << "Would you want to try again? or Terminate?   //again or terminate//" << endl;
        cin >> z;
        if (z == "again") {
          continue;
        } else if (z == "terminate") {
          cout << "Program Terminated...";
          return 0;
        }

      }

    }
    if (sys_username2 == username2 && sys_password2 == password2 || (g == "bitesadmin**") || (g == "emreakkas") || (g == "sinemsenyurtduyar") || (g == "yasinisik") || (username != "" && password != "" && id1 != 0 && email != "")) {
      cout << "Acces Granted" << endl;
      cout << "Select the operation you want to execute..." << endl;
      cout << "1-Facebook 2-Instagram 3-LinkedIn 4-Google Search 5- 1967 Impala 6-Logout 7-Exit" << endl;
      cin >> secim;
      if (secim == 1) {
        ShellExecute(hwnd, "open", "https://tr-tr.facebook.com/", NULL, NULL, NULL);
        return 0;
      } else if (secim == 2) {

        ShellExecute(hwnd, "open", "https://instagram.com/", NULL, NULL, NULL);
        return 0;
      } else if (secim == 3) {

        ShellExecute(hwnd, "open", "https://tr.linkedin.com/", NULL, NULL, NULL);
        return 0;
      } else if (secim == 4) {
        cout << "Search : ";
        cin >> search;

        strsearch = google + search;
        ShellExecute(hwnd, "open", strsearch.c_str(), NULL, NULL, NULL);
        return 0;
      } else if (secim == 5) {

        ShellExecute(hwnd, "open", "https://www.google.com/search?q=chevrolet+1967+impala&rlz=1C1SQJL_trTR855TR855&sxsrf=ALiCzsaWBqst1lmW5jXTLRzFkEdXcSij0g:1663882310099&source=lnms&tbm=isch&sa=X&ved=2ahUKEwjKkqrQrKn6AhWP6CoKHQtWDvMQ_AUoAXoECAIQAw&biw=1920&bih=929&dpr=1#imgrc=Cj4iDoLlDiql_M", NULL, NULL, NULL);
        return 0;
      } else if (secim == 7) {
        cout << "Procces aborted...";
        return 0;
      } 
	  else if(secim==6){
	  	cout<<"You've been logged out..."<<endl;
	  	continue;
	  } 
	  else {
        cout << "Wrong Selection..." << endl;
        cout << "Would you want to try again? or Terminate?   //again or terminate//" << endl;
        cin >> x;
        if (x == "again")
          cout << "";
        else if (x == "terminate") {
          cout << "Program Terminated...";
          return 0;
        } else {
          cout << "eh artik";
          return 0;
        }
      }
    } else {
      cout << "Wrong username or password...";
      cout << "Would you try again?   //yes or no//" << endl;
      cin >> a;
      if (a == "yes")
        continue;
      else if (a == "no")
        cout << "Program Terminated.";
      return 0;
    }
  }
}

/*
Alexander Shelton
C++ OOP Tutorial #1
 */


#include <iostream>
#include <string>


using namespace std;

class Employee{
public:
    Employee(string fname, string lname, int payment);
    string fullName();
    void showEmployee();
    void giveRaise(); //5% pay raise

private:
    string firstName;
    string lastName;
    string email;
    double pay;
};



void Employee::showEmployee(){
    cout << "Name: " << firstName << " " << lastName << endl;
    cout << "Email: " << email << endl;
    cout << "Salary: " << pay << endl;

}

Employee::Employee(string fname, string lname, int payment){
    firstName = fname;
    lastName = lname;
    pay = payment;
    email = firstName+'.'+lastName+"@mail.com";
}

string Employee::fullName(){
    return(firstName + ' ' + lastName);
}

void Employee::giveRaise(){
    int raise = pay * 0.05;
    pay += raise;
    cout << "Raise applied" << endl;
}


int main(){

    Employee emp1("paul", "blart", 33400);
    emp1.showEmployee();
    emp1.giveRaise();
    emp1.showEmployee();

    return 0;
}
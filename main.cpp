#include <iostream>
#include<stdlib.h>
#include <math.h>
#include <string>

using namespace std;

////global variables for total number, array, string and id
int initialID = 1001; //as id starts with 1001
int n = 0;
int i = 0; 
int y[100];
int z[100];//to store salary, if not needed remove
bool flag = 0;
string h[100];//storing last name, remove if not needed
double salary[100];
int check = 0;


class Employee
{
private:
    int employeeID;
    string firstName; 
    string lastName;  
    
    double annualSalary;
    float workingHours;
    float costPerHour;
    float deduction;

public:
    void set_fieldName();
    void get_fieldName();
    void get_employeeDetails();
    void set_employeeID(int);
    void set_Name();
    void set_firstName();
    void set_lastName();
    void set_workingHour();
    void set_costPerHour();
    void set_deduction();  //have to set this in update
    void set_annualSalary();
    double get_annualSalary();
};

void::Employee::set_employeeID(int eID){
    this->employeeID=eID;
}

void ::Employee::set_firstName()
{
    cout << "Enter First Name of the Employee: ";
    while (!(cin >> this->firstName)){// check if character or not
        
        cout << "Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');

    }
}
void ::Employee::set_lastName()
{
    cout << "Enter Last Name of the Employee: ";

    while (!(cin >> this->lastName)){// check if character or not
        
        cout << "Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
}
void ::Employee::set_workingHour()
{
    cout << "Set working Hours (weekly) for this employee: ";
    while (!(cin >> this->workingHours) && (this->workingHours)>60 && this->workingHours<1){ // checking character or not and if the value is greater than 60 and less than 1

        cout << "Please enter the working hours between 1 and 60! Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
}
void ::Employee::set_costPerHour()
{
    cout << "Set cost per hour for the Employee: ";

    while (!(cin >> this->costPerHour)&& this->costPerHour<0){ // checking character or if its a negative number
        cout << "Please enter a number! Try again: ";
        cin.clear();
        cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
                                // whichever comes first.
    }
    
}

void ::Employee::set_deduction(){

    cout << "How much do you want to deduct from the employees salary? =";
    while (!(cin >> this->deduction)&& this->deduction<1){

        cout << "Please enter a positive number! Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');// whichever comes first.
    }
    
}

void ::Employee::set_annualSalary(){
    this->annualSalary=((double(this->workingHours)*double(this->costPerHour))*52.143)-double(this->deduction);  
}
double ::Employee::get_annualSalary(){
    return this->annualSalary;
}
void ::Employee ::get_fieldName()
{
    cout << this->firstName << "\t\t" << this->lastName << "\t\t\t" << this->employeeID << "\t\t\t" << this->annualSalary << "\t" << endl;
}
void::Employee::get_employeeDetails(){

}


//global variable k to count entries
int k = 0;
void ::Employee ::set_fieldName()
{
    set_employeeID(initialID);
    initialID++;
    cout << n; //remove this if you want to
    set_firstName();
    set_lastName();
    set_workingHour();
    set_costPerHour();
    set_annualSalary();
    z[i] = annualSalary;//remove if not needed further
    salary[i] = annualSalary;
    h[i] = lastName;//storing last name, remove if not needed
    y[k] = employeeID;

    k++;
}

int main()
{
    //-------defining variables and initializing them-------------

    // HRM info;

    // int c;
    // char operation, ch;
    // //--------Printing my name on screen----------------
    // cout << "Welcome to the  program 2.1 written by Your Name" << endl;
    // cout << "**************************************************************************" << endl;
    // cout << endl
    //      << endl
    //      << endl;
    // do
    // {

    //     cout << "Welcome to Human Resource Management (HRM) Software of Company XYZ.";
    //     cout << "To do specific task please choose one of the following commands." << endl
    //          << endl
    //          << endl;
    //     cout << "    1. Add new employee" << endl;
    //     cout << "    2. Delete employee information" << endl;
    //     cout << "    3. Update employee information" << endl;
    //     cout << "    4. Make reports based on specific field" << endl;
    //     cout << "    5. Search employee" << endl;
    //     cout << "    6. Quit" << endl
    //          << endl;

    //     while (!(cin >> c)) // Reciving vaiables from input : is it no/character ?
    //     {
    //         cout << "Please  enter a number!  Try again: ";
    //         cin.clear();
    //         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
    //                                 // whichever comes first.
    //     }
    //     switch (c)
    //     {
    //     case 1:
    //         cout << "\nEnter the information of the new employee" << endl;
    //         info.AddEmployee();
    //         break;
    //     case 2:
    //         info.DeleteEmployee();
    //         break;
    //     case 3:
    //         cout << "\nEnter an item to deletion";
    //         info.UpdateEmployee();
    //         break;
    //     case 4:
    //         cout << "\nEnter an element to search";
    //         info.ReportList();
    //         break;
    //     case 5:
    //         info.SearchEmployee();
    //         break;
    //     default:
    //         cout << "\nInvalid option try again";
    //     }
    //     cout << "\ndo u want to continue";
    //     cin >> ch;
    // } while (ch == 'y' || ch == 'Y');

    // system("pause");
    Employee a;
    a.set_fieldName();
    a.set_annualSalary();
    a.get_fieldName();
    return 0;
}

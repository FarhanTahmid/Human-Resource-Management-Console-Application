#include <iostream>
#include<stdlib.h>
#include <math.h>
#include <string>

using namespace std;

////global variables for total number, array, string and id
int initialID = 1001; //as id starts with 1001
int n = 0; //To track total number of employees
int i = 0; //to control loop while multiple employee input and control the array Employee emp[100]
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
    try{
        cout << "Set working Hours (weekly) for this employee: ";
        float wh;
        cin>>wh;
        cin.clear();
        cin.ignore(1000, '\n');
        if ((wh) > 60 || wh < 1){
            cout << "\nPlease enter the working hours between 1 and 60! Try again: ";
            set_workingHour();
        }
        else{
            this->workingHours = wh;
        }
    }
    catch(invalid_argument){
        cout << "\nPlease enter the working hours between 1 and 60! Try again: \n";
        set_workingHour();
    }
    
    
}
void ::Employee::set_costPerHour()
{
    try{
        cout << "Set Cost Per Hour for this employee: ";
        float cph;
        cin>>cph;
        cin.clear();
        cin.ignore(1000, '\n');
        if ((cph) < 0){
            cout << "\nPlease enter the Cost Per Hour a positive number! Try again: ";
            set_costPerHour();
        }
        else{
            this->costPerHour = cph;
        }
    }
    catch(invalid_argument){
        cout << "\nPlease enter the Cost Per Hour a positive Number! Try again: ";
        set_costPerHour();
    }
    
}
void ::Employee::set_deduction(){

    try{
        cout << "Set The amount you want to deduct from this employee's annual Salary: ";
        float ded;
        cin>>ded;
        cin.clear();
        cin.ignore(1000, '\n');
        if ((ded)< 0){
            cout << "\nPlease enter deduction amount a positive number! Try again: ";
            set_deduction();
        }
        else{
            this->deduction = ded;
        }
    }
    catch(invalid_argument){
        cout << "\nPlease enter deduction amount a positive number! Try again: ";
        set_deduction();
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
    cout << this->employeeID << "\t\t" << this->firstName << "\t\t\t" << this->lastName << "\t\t\t" << this->annualSalary << "\t" << endl;
}
void::Employee::get_employeeDetails(){

}


//global variable k to count entries
int k = 0;
void ::Employee ::set_fieldName()
{
    set_employeeID(initialID);
    initialID++;
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


class HRM
{
private:
    Employee emp[100];
    Employee temp[100];

public:
    void AddEmployee();
    void DeleteEmployee();
    void SearchEmployee();
    void UpdateEmployee();
    void ReportList();
};


//Add employee function
void ::HRM::AddEmployee()
{

    char again;
    do
    {
        n++; //Track of total Number of employees
        emp[i].set_fieldName(); //setting the employee on current point of i
        i++; //incrementing i
        cout<<i<<"\n";

        cout << "\nThe employee with the following information has been recorded:" << endl;
        cout << "\nEmployee Id       First Name         Last Name           Annual Salary ($)";
        cout << "\n------------   -----------------  ---------------     -------------------------" << endl;

        for (int i = 0; i < n; i++)
        {
            emp[i].get_fieldName();
        }
        cout << "Do u wont to add another employee?\nIf yes, press 'y' or press any other key to exit!" << endl;
        cin >> again;
    } while ((again == 'y' || again == 'Y'));
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
    HRM employee;
    employee.AddEmployee();
    return 0;
}

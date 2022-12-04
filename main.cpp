#include <iostream>
#include<fstream>
#include<stdlib.h>
#include <math.h>
#include <string>
#include<bits/stdc++.h>

using namespace std;

int initialID = 1001; //as id starts with 1001
int i=0; //to control loop while multiple employee input and control the array Employee emp[100]



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
    void set_fieldNameFromFile(string,string,float,float,float);
    void get_fieldName();
    void get_deletingemployeeDetails();
    void get_deletingConfirmation();
    void get_updatingConfirmation();
    void set_employeeID(int);
    int get_employeeID();
    void set_Name();
    void set_firstName();
    void set_firstName(string);
    void set_lastName();
    void set_lastName(string);
    void set_workingHour();
    void set_workingHour(float);
    void set_costPerHour();
    void set_costPerHour(float);
    void set_deduction();
    void set_deduction(float);
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

void ::Employee::set_firstName(string fname)
{
    this->firstName=fname;
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
void ::Employee::set_lastName(string lname)
{
    this->lastName=lname;
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
void ::Employee::set_workingHour(float wh)
{
    this->workingHours=wh;
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
void ::Employee::set_costPerHour(float cph)
{
    this->costPerHour=cph;
}
void ::Employee::set_deduction(){

    try{
        cout << "Set The amount you want to deduct from this employee's annual Salary: ";
        float dd;
        cin>>dd;
        cin.clear();
        cin.ignore(1000, '\n');
        if ((dd)< 0){
            cout << "\nPlease enter deduction amount a positive number! Try again: ";
            set_deduction();
        }
        else{
            this->deduction = dd;
            //cout<<this->deduction;
        }
    }
    catch(invalid_argument){
        cout << "\nPlease enter deduction amount a positive number! Try again: ";
        set_deduction();
    }

}
void ::Employee::set_deduction(float ded)
{
    this->deduction=ded;
}
void ::Employee::set_annualSalary(){
    this->annualSalary=((this->workingHours*this->costPerHour)*52.0)-(this->deduction);
}
double ::Employee::get_annualSalary(){
    return this->annualSalary;
}
void ::Employee ::get_fieldName()
{
    cout << this->employeeID << "\t\t" << this->firstName << "\t\t\t" << this->lastName << "\t\t\t" << this->annualSalary << "\t" << endl;
}
void::Employee::get_deletingemployeeDetails(){
    cout<<"Do you really want to delete employee " <<this->firstName<<" "<<this->lastName<< " (y/n)?:"<<endl;
}
void::Employee::get_deletingConfirmation(){
    cout<<"The employee " <<this->firstName<<" "<<this->lastName<< " was deleted!"<<endl;
}
void::Employee::get_updatingConfirmation(){
    cout<<"The information for " <<this->firstName<<" "<<this->lastName<< " has been updated !"<<endl;
}

int::Employee::get_employeeID(){
    return this->employeeID;
}

void ::Employee ::set_fieldName()
{
    set_employeeID(initialID);
    initialID++;
    set_firstName();
    set_lastName();
    set_workingHour();
    set_costPerHour();
    set_annualSalary();
    set_deduction();
}
void::Employee::set_fieldNameFromFile(string fname1,string lname1,float wh1,float cph1,float ded1){
    set_employeeID(initialID);
    initialID++;
    set_firstName(fname1);
    set_lastName(lname1);
    set_workingHour(wh1);
    set_costPerHour(cph1);
    set_deduction(ded1);
    set_annualSalary();
}

class HRM
{

public:
    void AddEmployee();
    void readFromFile();
    void deleteEmployee();
    int searchEmployee();
    int searchEmployee(int);
    void updateEmployee();
    int number; //To track total number of employees
    Employee emp[100];
    Employee temp[100];

};


//Add employee function
void ::HRM::AddEmployee()
{

    char again;

    do
    {
        if(number==100){
        cout<<"Warning! Total Number Of employee is Now 100! Delete an Employee to add one!"<<endl;
    }else{
        number++; //Track of total Number of employees
        emp[i].set_fieldName(); //setting the employee on current point of i
        i++; //incrementing i
        cout<<i<<"\n";

        cout << "\nThe employee with the following information has been recorded:" << endl;
        cout << "\nEmployee Id       First Name         Last Name             Salary Per Year ($)";
        cout << "\n------------   -----------------  ---------------     -------------------------" << endl;

        for (int i = 0; i < number; i++)
        {
            emp[i].get_fieldName();
        }

    }

        cout<<"Total Number Of Employee: "<<number<<endl;
        cout << "Do you want to add another employee?(y/n)" << endl;
        cin >> again;
    } while ((again == 'y' || again == 'Y'));
}

//search Employee with ID.
int HRM::searchEmployee()
{
    int searchID;
    char searchAgain;
    bool found;
    if(number!=0){
        do
        {
            cout<<"Enter Employee ID to search an Employee: ";
            cin>>searchID;
            for(int i=0; i<number; i++)
            {
                if(emp[i].get_employeeID()==searchID)
                {
                    cout<<"Employee Found with this ID!"<<endl;
                    cout<<"Details:"<<endl;
                    cout << "\nEmployee ID       First Name     Family Name             Annual Salary ($)";
                    cout << "\n------------   ----------------  ----------------   -----------------------" << endl;
                    emp[i].get_fieldName();
                    found=true;
                    break;
                }
                else
                {
                    found=false;
                }
            }
            if(found==false)
            {
                cout<<"No Employee Was found with this ID!";
            }
            cout << "\nDo you want to Search again?(y/n)?"<< endl;
            cin >> searchAgain;
        }
        while (searchAgain == 'y' || searchAgain == 'Y');
        return searchID;
    }else{
        "The Record is Empty!";
    }

}

//search employee to delete
int HRM::searchEmployee(int searchID){
    int deleteIndex=-1;
    bool found;
    for(int i=0; i<number; i++)
    {
        if(emp[i].get_employeeID()==searchID)
        {
            found=true;
            deleteIndex=i;
            break;
        }
        else
        {
            found=false;
        }
    }
    if(found==false)
    {
        cout<<"No Employee Was found with this ID!";
        return -1;
    }
    return deleteIndex;
}

//Delete Employee
void HRM::deleteEmployee()
{
    if(number!=0){
        int empIdtoDelete;
        bool found;
        char redo;
        char deleteChoice;
        found = false;
    label1:
        do{
            cout << "Please Enter the Employee ID: ";

            while (!(cin >> empIdtoDelete))//check if string or not
            {
                cout << "Please enter a number! Try again: ";
                cin.clear();
                cin.ignore(1000, '\n');
            }
            int getIndex=searchEmployee(empIdtoDelete);

            if(getIndex!=-1)
            {
                found=true;
                emp[getIndex].get_deletingemployeeDetails();
                cin>>deleteChoice;
                if (deleteChoice == 'y' || deleteChoice == 'Y'){
                    for(int i=0; i<number; i++)
                    {
                        if(empIdtoDelete==emp[i].get_employeeID())
                        {
                            emp[i].get_deletingConfirmation();
                            emp[i]=emp[i+1];
                            number--;
                        }
                    }
                }

            }
            cout<<"Do you want to repeat delete by Entering new Employee ID? (y/n)"<<endl;
            cin>>redo;
        }while (redo == 'y' || redo == 'Y');

        if (found == false)
        {
            cout << "Sorry, there is no employee with requested Employee ID.\nDo you want to try again? (y/n)?:";
            cin >> redo;
            if (redo == 'y' || redo == 'Y')
            {
                goto label1;
                cout << endl;
            }
        }
    }else{
        cout<<"Your record is empty!";
    }
}


//Update Employee
void HRM::updateEmployee()
{

label2:

    int employeeID;
    cout << "Please Enter the Employee ID? ";

    while (!(cin >> employeeID)){
        cout << "Please Enter a number! Try again: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    bool found = false;
    for (int i = 0; i < number; i++)
    {

        if (employeeID==emp[i].get_employeeID()){
            found = true;
            int updatechoice = 0;
            char again;
            do
            {
                cout << endl;
                cout << "Please enter the related number of field which you would like to update?" << endl;
                cout << "(1. First name" <<" 2. Last name" << " 3. Working hours per week" << " 4. Payment for one hour" <<" 5. Deduction)?"<<endl;
                cin >> updatechoice;
                switch(updatechoice)
                {
                case 1:
                    emp[i].set_firstName();
                    break;
                case 2:
                    emp[i].set_lastName();
                    break;
                case 3:
                    emp[i].set_workingHour();
                    emp[i].set_annualSalary();
                    break;
                case 4:
                    emp[i].set_costPerHour();
                    emp[i].set_annualSalary();
                    break;
                case 5:
                    emp[i].set_deduction();
                    emp[i].set_annualSalary();
                    break;
                default:
                    cout<<"Invalid option! Try again!"<<endl;
                }

                cout << "Do you want to update any other field? (y/n)=";
                cin >> again;
            } while (again == 'y' || again == 'Y');
            emp[i].get_updatingConfirmation();
            break;

        }
    }
    if(found==false){
        cout<<"Sorry, there is no employee with this ID!"<<endl;
    }
    cout<<"Do you want to repeat update by entering new employee ID? (y/n)?: "<<endl;
    char re;
    cin>>re;
    if(re=='y'||re=='Y'){
        goto label2;
    }

}


//to read employee from file
void::HRM::readFromFile(){

    ifstream file;
    string firstName;
    string lastName;
    float wh;
    float cph;
    float ded;
    file.open("employee.txt",ios::in);
    int lines=0;
    if(file.is_open()){

        while(file>>firstName>>lastName>>wh>>cph>>ded){
            number++;
            emp[i].set_fieldNameFromFile(firstName,lastName,wh,cph,ded);
            i++;
        }
    }
    file.close();
}

int main()
{

    int menuChoice;
    char again;
    cout << "**************************************************************************" << endl;
    cout << "                   HUMAN RESOURCE MANAGEMENT PROGRAM" << endl;
    cout << "**************************************************************************" << endl;
    cout << endl<< endl;
    HRM employee;
    employee.readFromFile();

    do
    {

        cout << "Welcome...";
        cout << "Please type the number of the options you want to choose :" << endl;
        cout << "    1. Add new Employee" << endl;
        cout << "    2. Delete an Employee" << endl;
        cout << "    3. Update Employee Information" << endl;
        cout << "    4. Search for an Employee" << endl;
        cout << "    5. Quit" << endl;
        cout<<"Please Enter your choice 1..5: ";
        cout<< endl;

        while (!(cin >> menuChoice)){
            cout << "Please Enter a number between 1-5! Try again: ";
            cin.clear();
            cin.ignore(1000, '\n');
        }
        switch (menuChoice)
        {
        case 1:
            cout<<"## Add an Employee ##"<<endl;
            employee.AddEmployee();
            break;
        case 2:
            cout<<"## Delete an Employe ##"<<endl;
            employee.deleteEmployee();
            break;
        case 3:
            cout<<"## Update an Employee ##"<<endl;
            employee.updateEmployee();
            break;
        case 4:
            cout<<"## Search an Employee ##"<<endl;
            employee.searchEmployee();
            break;
        case 5:
            system("pause");
            break;
        default:
            cout << "\nInvalid input! Try again: ";
        }
        cout << "\nDo u want to perform any other task? (y/n)";
        cin >> again;
    } while (again == 'y' || again == 'Y');
    return 0;
}

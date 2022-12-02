#include <iostream>
#include <math.h>
#include <string>

using namespace std;

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
    void gett_fieldName();
    void set_employeeID(int);
    void set_Name();
    void set_firstName();
    void set_lastName();
    void set_workingHour();
    void set_costPerHour();
    void set_deduction();  //have to set this in update
    double get_annualSalary();
};

void::Employee::set_employeeID(int eID){
    this->employeeID=eID;
}

void ::Employee::set_firstName()
{
    cin >> this->firstName;
}
void ::Employee::set_lastName()
{
    cin >> this->lastName;
}
void ::Employee::set_workingHour()
{
    cin >> this->workingHours;
}
void ::Employee::set_costPerHour()
{
    cin >> this->costPerHour;
    
}

void ::Employee::set_deduction()
{
    cin >> this->deduction;
    
}

double ::Employee::get_annualSalary()
{
    this->annualSalary=((double(this->workingHours)*double(this->costPerHour))*365)-double(this->deduction);
    cout<<annualSalary;
    return this->annualSalary;
}
void ::Employee ::get_fieldName()
{
    cout << this->firstName << "\t\t" << this->lastName << "\t\t\t" << this->employeeID << "\t\t\t" << this->annualSalary << "\t" << endl;
}


class HRM
{
private:
    Employee e[100];
    Employee temp[100];

public:
    void AddEmployee();
    void DeleteEmployee();
    void SearchEmployee();
    void UpdateEmployee();
    void ReportList();
};

// ////global variables declared
// int n = 0, i = 0, x = 8248001, y[100];
// bool flag = 0;
// int z[100];
// string h[100];
// double sal[100];
// int check = 0;

// /////////////////////////////////////////////////////////////////////
// //      Definition of the AddEmployee() method of the Company class
// //      This method will add an employee to the Company class instance.
// //      The attributes of the employee should be those of the user's
// //      own choosing.

// void ::HRM::AddEmployee()
// {

//     int x;
//     char redo;

//     do
//     {
//         n++;
//         e[i].set_fieldName();
//         i++;

//         cout << "\nThe employee with the following information has been added to the system:" << endl;
//         cout << "\nFirst Name       Last Name       Employeeal ID         annualSalary per year (Euros)";
//         cout << "\n--------------   --------------  ------------       -------------------------" << endl;
//         // cout<<"naaaaaaaaaaaam"<< n<<endl;
//         for (int i = 0; i < n; i++)
//         {
//             e[i].get_fieldName();
//         }

//         cout << "do u wont to add another employee" << endl;
//         cin >> redo;
//     } while ((redo == 'y' || redo == 'Y'));
// }

// /////////////////////////////////////////////////////////////////////
// //      Definition of the DeleteEmployee() method of the Company class.
// //      This method will delete the employee of the user's choosing from
// //      the Company class instance.

// void HRM::DeleteEmployee()
// {
//     //      Show all of the current employees
//     //      Ask the user the ID of which employee that they wish to
//     //      delete.

//     int empId;
//     bool lol;
//     char redo1, redo2;
//     lol = false;
// lebel:
//     cout << "ID of employee to remove: ";

//     while (!(cin >> empId)) // Reciving vaiables from input : is it no/character ?
//     {
//         cout << "Please  enter a number!  Try again: ";
//         cin.clear();
//         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                 // whichever comes first.
//     }

//     for (i = 0; i < n; ++i)
//     {

//         if (y[i] == empId)
//         {
//             e[i] = e[i + 1];
//             lol = true;
//             e[i].set_Name();
//             cin >> redo2;
//             if (redo2 == 'Y' || redo2 == 'y')
//             {
//                 int a;
//                 a = n;

//                 cout << "\nThe employee with the following information has been added to the system:" << endl;
//                 cout << "\nFirst Name       Last Name       Employeeal ID         annualSalary per year (Euros)";
//                 cout << "\n--------------   --------------  ------------       -------------------------" << endl;
//                 for (int i = 0; i < a; i++)
//                 {

//                     e[i].get_fieldName();
//                     cout << "hahahahah=" << n << endl;
//                     a--;
//                     n = a;
//                     n++;
//                 }

//                 ///      goto lebel1;
//             }

//             cout << endl;

//             // Delete function
//         }
//     }

//     if (lol == false)
//     {
//         cout << "Sorry, there is not any employee with requested Employeeal number."
//              << " Do you want to repeat delete by entering the new Employeeal number (y/n)?:";
//         cin >> redo1;
//         if (redo1 == 'Y' || redo1 == 'y')
//         {
//             goto lebel;
//             cout << endl
//                  << endl;
//         }
//     }

//     //      Delete the chosen employee from the array of employees
//     //      as represented in this class.

//     // Actually remove the entry from memory so as to not leak objects
//     // nextIndex--;
// }
// /////////////////////////////////////////////////////////////////////
// //      Definition of the UpdateEmployee() method of the Company class
// //      This method will modify an attribute of the employee in
// //      the Company class instance. The employee and attribute should be
// //      ones of the user's own choosing.
// void HRM::UpdateEmployee()
// {

//     int empId;
//     char redo1, redo2;

// lebel:
//     cout << "ID of employee to modify data: ";

//     while (!(cin >> empId)) // Reciving vaiables from input : is it no/character ?
//     {
//         cout << "Please  enter a number!  Try again: ";
//         cin.clear();
//         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                 // whichever comes first.
//     }

//     int flag1 = 0;
//     for (int i = 0; i < n; ++i)
//     {

//         if (y[i] != empId)
//         {
//             flag1++;
//         }
//     }
//     /*  if (flag1==n){

//      // cout<<" not     matching="<< y[i];
// cout<<"Sorry, there is not any employee with requested Employeeal number. Do you want to repeat delete by entering the new Employeeal number (y/n)?:";
//  cin>>redo1;
//       if(redo1=='Y'||redo1=='y'){
//       goto lebel;
//         }
//       } */

//     cout << endl;
// lebel1:

//     for (int i = 0; i < n; ++i)
//     {

//         if (y[i] == empId)
//         {

//             cout << "matching=" << y[i];

//             flag = true;
//             int choice = 0;
//             char redo;

//             do
//             {
//                 cout << endl
//                      << endl;
//                 cout << "Please enter the related number of field which you would like to update" << endl;
//                 cout << "1. First name" << endl;
//                 cout << "2. Family name" << endl;
//                 cout << "3. Working hours per week" << endl;
//                 cout << "4. Payment for one hour" << endl;
//                 cout << std::endl;

//                 cin >> choice;
//                 if (choice == 1)
//                 {
//                     cout << " First name: ";
//                     e[i].set_firstName();
//                 }
//                 else if (choice == 2)
//                 {
//                     cout << " Family name: ";
//                     e[i].set_lastName();
//                 }
//                 else if (choice == 3)
//                 {
//                     cout << " Working hours per week: ";
//                     e[i].set_workingHour();
//                 }
//                 else if (choice == 4)
//                 {
//                     cout << " Payment for one hour: ";
//                     e[i].set_costPerHour();
//                 }
//                 cout << "Do you want to update another field (Y/N)=";
//                 cin >> redo;
//             } while (redo == 'y' || redo == 'Y');
//         }
//     }
//     int a;
//     a = n;
//     cout << "\nThe employee with the following information has been added to the system:" << endl;
//     cout << "\nFirst Name       Last Name       Employeeal ID         annualSalary per year (Euros)";
//     cout << "\n--------------   --------------  ------------       -------------------------" << endl;
//     for (int i = 0; i < a; i++)
//     {
//         e[i].get_fieldName();

//         cout << "hahahahah=" << n << endl;
//     }
// }



// void HRM::ReportList()
// {

//     char op;
//     bool doMore;
//     cout << "\nPlease enter the related number of the field which you would like to sort the list based on it.\n(1. Family name, 2.annualSalary)?\n"
//          << endl;
//     // cin>>op;
//     while (!(cin >> op)) // Reciving vaiables from input : is it no/character ?
//     {
//         cout << "Please  enter a number!  Try again: ";
//         cin.clear();
//         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                 // whichever comes first.
//     }

//     switch (op)
//     {
//     case '1':
//         cout << "\nSorting based on Family Name\n"
//              << endl;
//         for (int i = 0; i <= n; i++)
//         {
//             for (int j = i + 1; j <= n - 1; j++)
//             {
//                 if (h[i] > h[i + 1])
//                 {
//                     temp[i] = e[i];
//                     e[i] = e[j];
//                     e[j] = temp[i];
//                 }
//             }
//         }

//         for (int i = 0; i < n; i++)
//         {
//             e[i].get_fieldName();
//         }
//         cout << "\nsorted\n";

//         break;
//     case '2':
//         cout << "\nSorting based on annualSalary\n"
//              << endl;
//         for (int h = 0; h < n; h++)
//         {
//             for (int q = h + 1; q < n; q++)
//             {
//                 if (sal[h] > sal[h + 1])
//                     ;
//                 {
//                     temp[h] = e[h];
//                     e[h] = e[q];
//                     e[q] = temp[h];
//                 }
//             }
//         }
//         for (int j = 0; j < n; j++)
//         {
//             e[j].get_fieldName();
//         }
//         cout << "\nsortedlist is printed above\n";

//         break;
//     }
// }

// void HRM::SearchEmployee()
// {
//     int c;
//     char redo1;
//     string familyname;
//     double min, max;
//     do
//     {
//         cout << "Search is based on two different fields (1.family name, 2.annualSalary), please enter your choice?=" << endl;
//         // cin>>c;
//         while (!(cin >> c)) // Reciving vaiables from input : is it no/character ?
//         {
//             cout << "Please  enter a number!  Try again: ";
//             cin.clear();
//             cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                     // whichever comes first.
//         }

//         if (c == 2)

//         {
//             cout << "Please define your search range for annualSalary of employees ." << endl;
//             cout << "What is minimum annualSalary for search (S_min)?=" << endl;
//             // cin>>min;
//             while (!(cin >> min)) // Reciving vaiables from input : is it no/character ?
//             {
//                 cout << "Please  enter a number!  Try again: ";
//                 cin.clear();
//                 cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                         // whichever comes first.
//             }
//             cout << "What is maximum annualSalary for search (S_max)?=" << endl;
//             // cin>>max;
//             while (!(cin >> max)) // Reciving vaiables from input : is it no/character ?
//             {
//                 cout << "Please  enter a number!  Try again: ";
//                 cin.clear();
//                 cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                         // whichever comes first.
//             }
//             int a;
//             a = n;
//             cout << "\nThe employee with the following information has been added to the system:" << endl;
//             cout << "\nFirst Name       Last Name       Employeeal ID         annualSalary per year (Euros)";
//             cout << "\n--------------   --------------  ------------       -------------------------" << endl;
//             for (int i = 0; i < n; i++)
//             {

//                 if (z[i] > min && z[i] < max)
//                 {

//                     cout << "naaaaaaaaaaaam" << n << endl;
//                     e[i].gett_fieldName();
//                     cout << "matching=" << z[i];
//                 }
//             }
//         }

//         else if (c == 1)
//         {
//             cout << "Please enter the family name of employee?" << endl;
//             cin >> familyname;
//             cout << "\nThe employee with the following information has been added to the system:" << endl;
//             cout << "\nFirst Name       Last Name       Employeeal ID         annualSalary per year (Euros)";
//             cout << "\n--------------   --------------  ------------       -------------------------" << endl;
//             for (int i = 0; i < n; i++)
//             {

//                 if (h[i] == familyname)
//                 {

//                     cout << "naaaaaaaaaaaam" << n << endl;
//                     e[i].gett_fieldName();
//                     cout << "matching=" << z[i];
//                 }
//             }
//         }

//         cout << "\nDo you want to Search any other field (y/n)?\n"
//              << endl;
//         cin >> redo1;
//     } while (redo1 == 'y' || redo1 == 'Y');
// }

// void ::Employee ::set_Name()
// {
//     cout << "Do you really want to delete employee" << firstName << "\t" << lastName << "(y/n)?:"; // employeeID=y[i];
// }

// int k = 0;
// void ::Employee ::set_fieldName()
// {
//     employeeID = x;
//     x++;
//     cout << n;
//     cout << "First Name=";

//     while (!(cin >> firstName)) // Reciving vaiables from input : is it no/character ?
//     {
//         cout << "Please  enter a string!  Try again: ";
//         cin.clear();
//         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                 // whichever comes first.
//     }
//     cout << "Last Name=";

//     while (!(cin >> lastName)) // Reciving vaiables from input : is it no/character ?
//     {
//         cout << "Please  enter a string!  Try again: ";
//         cin.clear();
//         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                 // whichever comes first.
//     }

//     cout << "How many hours a week is his/her work? =";
//     ;
//     while (!(cin >> workingHours)) // Reciving vaiables from input : is it no/character ?
//     {
//         cout << "Please  enter a number!  Try again: ";
//         cin.clear();
//         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                 // whichever comes first.
//     }
//     cout << "How much per hour is his/her annualSalary? =";

//     while (!(cin >> costPerHour)) // Reciving vaiables from input : is it no/character ?
//     {
//         cout << "Please  enter a number!  Try again: ";
//         cin.clear();
//         cin.ignore(1000, '\n'); // Skip to next newline or 1000 chars,
//                                 // whichever comes first.
//     }

//     annualSalary = workingHours * costPerHour * 52;
//     z[i] = annualSalary;
//     sal[i] = annualSalary;
//     h[i] = lastName;
//     y[k] = employeeID;

//     k++;
// }



// void ::Employee ::gett_fieldName()
// {
//     cout << firstName << "\t\t" << lastName << "\t\t\t" << employeeID << "\t\t\t" << annualSalary << "\t" << endl;
// }

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
    a.set_employeeID(100);
    a.set_firstName();
    a.set_lastName();
    a.set_workingHour();
    a.set_costPerHour();
    a.set_deduction();

    a.get_fieldName();
    return 0;
}

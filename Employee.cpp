#include <iostream>
using namespace std;

class Employee
{   //Private Data Members
    string Fname;
    string Lname;
    float salary;

public:
    Employee() //Contructor making default value 0
    {
        salary = 0.0;
    }
    // Setting the Member Functions
    void setFname(string);
    void setLname(string);
    void setSalary(float);
    
    //Getting the Member Functions
    string getFname() { return Fname; }
    string getLname() { return Lname; }
    float getSalary() { return salary; }
};

void Employee ::setFname(string a)
{
    Fname = a;
}
void Employee ::setLname(string b)
{
    Lname = b;
}
void Employee ::setSalary(float c)
{
    if (c >= 0)
    {
        salary = c;
    }
    else
    {
        cout << "Enter the correct salary of the employee";
        exit(0);
    }
}

int main()
{
    string Fname, Lname;
    float salary;

    Employee E1, E2;
    
    //Taking the input from the user of Employee 1
    cout << "Enter the First name of Employee 1: ";
    cin >> Fname;
    E1.setFname(Fname);

    cout << "Enter the Last name of Employee 1: ";
    cin >> Lname;
    E1.setLname(Lname);

    cout << "Enter the salary of Employee 1: ";
    cin >> salary;
    E1.setSalary(salary);

    //Taking the input from the user of Employee 2
    cout << endl
         << "Enter the First name of Employee 2: ";
    cin >> Fname;
    E2.setFname(Fname);

    cout << "Enter the Last name of Employee 2: ";
    cin >> Lname;
    E2.setLname(Lname);

    cout << "Enter the salary of Employee 2: ";
    cin >> salary;
    E2.setSalary(salary);
    
    //Display the data of the employee Before salary Increasae
    cout << endl
         << "Before increase in the salary" << endl;
    cout << endl
         << "First Name\t\tLast Name\t\tSalary" << endl;
    cout << E1.getFname() << "\t\t\t" << E1.getLname() << "\t\t\t" << E1.getSalary() * 12 << endl;
    cout << E2.getFname() << "\t\t\t" << E2.getLname() << "\t\t\t" << E2.getSalary() * 12 << endl;
    
    //Display the data of the employee After salary Increasae
    cout << endl
         << "After 10% increase in the salary" << endl;
    cout << endl
         << "First Name\t\tLast Name\t\tSalary" << endl;
    cout << E1.getFname() << "\t\t\t" << E1.getLname() << "\t\t\t" << (E1.getSalary() + ((10.0 / 100) * E1.getSalary())) * 12 << endl;
    cout << E2.getFname() << "\t\t\t" << E2.getLname() << "\t\t\t" << (E2.getSalary() + ((10.0 / 100) * E2.getSalary())) * 12 << endl;
    return 0;
}
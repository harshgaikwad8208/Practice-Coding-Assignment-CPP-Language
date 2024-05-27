#include<iostream>
#include<string.h>

using namespace std;

struct Employee 
{   //structure employee
    int empId;
    char name[20];
    double salary;
    
   //Default Constructor
    Employee() 
    {
        cout << "\n ->Employee Default constructor called\n";
        this->empId = 0;
        strcpy(this->name, "Not given");
        this->salary = 0;
    }
    //Parametrized Constructor
    Employee(int id, char* name, int salary) 
    {
        cout << "\n ->Employee Parameterized  constructor called\n";
        this->empId = 13;
        strcpy(this->name, "Sanjivani Gulve");
        this->salary = 50000;
    }
    //Setters
    void setEmpId(int a) 
    {
        this->empId = a;
    }
    void setName(char* name) 
    {
        strcpy(this->name, name);
    }
    void setSalary(double s) 
    {
        this->salary = s;
    }
    //getters
	int getEmpId() 
    {
        return this->empId;
    }
    char* getName() 
    {
        return this->name;
	}
    double getSalary() 
    {
        return this->salary;
    }

    void display() 
    {
        cout << "\n" << empId << " is " << name << " having salary " << salary << ".\n";
    }
};

struct SM : public Employee 
{  //Inheritance Syntx
    double incentive;
    int target;

    void display() 
    {
        Employee::display();  //Scope resolution
        cout << " Incentive:" << incentive << ", Target:" << target << "\n";
    }

	//setters
    void setIncentive(int a) 
    {
        this->incentive = a;
    }
 	void setTarget(int a) 
    {
        this->target = a;
    }
    //getters
    double getIncentive() 
    {
        return this->incentive;
    }

    int getTarget() 
    {
        return this->target;
    }

    SM() : Employee() 
    { //default constructor
        cout << "\n ->SM Default constructor called\n";
        this->incentive = 0;
        this->target = 0;
    }

    SM(int id, char* name, double s, double in, int t) : Employee(id, name, s) 
    { //Parameterized Constructor
        cout << "\n ->SM Parameterized constructor called\n";
        this->incentive = in;
        this->target = t;
        cout << "\n---------------------------------------------------------------------------------------------------------------\n";
    }
};

struct HR : public Employee 
{   //Inheritance Syntax
    double commission;

    void display() 
    {
        Employee::display();    //scope resolution
        cout << "\n Commission:" << commission << "\n";
    }

    void setCommission(double a) 
    {
        this->commission = a;
    }
    double getCommission() 
    {
        return this->commission;
    }

    HR() : Employee() 
    {  //default constructor
        cout << "\n ->HR default  constructor called\n";
        this->commission = 0;
    }

    HR(int id, char* name, double salary, double commission) : Employee(id, name, salary) 
    {  //parameterized constructor
        cout << "\n ->HR parameterized  constructor called\n";
        this->commission = commission;
        cout << "\n---------------------------------------------------------------------------------------------------------------\n";
    }
};
struct Admin : public Employee 
{        //syntax of inheritance
    double allowance;

    void setAllowance(double al) 
    {
        this->allowance = al;
    }
    double getAllowance() 
    {
        return this->allowance;
    }
    
    void display() 
    {
        Employee::display();        //scope resolution
        cout << "\n Allowance:" << allowance << "\n";
    }

    Admin() : Employee() 
    {  //default  constructor
        cout << "\n ->Admin default  constructor called\n";
        this->allowance = 0;
    }

    Admin(int id, char* name, double s, double al) : Employee(id, name, s) 
    {   //parameterized  constructor
        cout << "\n ->Admin parameterized  constructor called\n";
        this->allowance = al;
    }
};

int main() 
{
    HR H1;
    HR H2(13, "Sanjivani Gulve", 50000, 2000);  // HR
    SM S1;
    SM S2(13, "Sanjivani Gulve", 50000, 1000, 80);  // Sales Manager
    Admin A1;
    Admin A2(13, "Sanjivani Gulve", 50000, 2000);  // Admin
    cout << "\n---------------------------------------------------------------------------------------------------------------\n";
    cout << "\n**Print by display for HR**\n";
    H1.display();
    H2.display();
    cout << "\n---------------------------------------------------------------------------------------------------------------\n";
    cout << "\n**Print by display for Sales Manager**\n";
    S1.display();
    S2.display();
    cout << "\n---------------------------------------------------------------------------------------------------------------\n";
    cout << "\n**Print by display for Admin**\n";
    A1.display();
    A2.display();

    return 0;
}

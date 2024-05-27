// Design a system for managing employee information using object-oriented principles, specifically focusing on inheritance. Implement a base class Employee with essential attributes such as eid (employee ID), ename (employee name), and salary. The Employee class should have a constructor, setter, getter, display, and a member function to calculate the salary based on the specific employee type.
// Derive three classes from the base class: HR, SalesManager, and Admin. Each derived class should have its own set of attributes and methods, along with inheriting the attributes and methods from the base class.
// Employee Class:
// Attributes:
// eid: Employee ID
// ename: Employee Name
// salary: Basic Salary
// Methods:
// Constructor: Initializes the attributes.
// Setter: Sets values for attributes.
// Getter: Retrieves values of attributes.
// Display: Displays employee information.
// CalculateSalary: Calculates and returns the salary.
// HR Class (Derived from Employee):
// Additional Attributes:
// commission: Commission percentage Additional Methods:
// Constructor: Initializes the attributes.Setter: Sets values for attributes.
// Getter: Retrieves values of attributes.Display: Displays HR-specific information.
// CalculateSalary: method to calculate HR's total salary including commission.SalesManager Class (Derived from Employee):
// Additional Attributes:target: Sales target
// incentive: Incentive amount Additional Methods:
// Constructor: Initializes the attributes.Setter: Sets values for attributes.
// Getter: Retrieves values of attributes.Display: Displays Sales Manager-specific information.
// CalculateSalary: method to calculate Sales Manager's total salary including incentives.Admin Class (Derived from Employee):
// Additional Attributes:allowance: Allowance amount
// Additional Methods:Constructor: Initializes the attributes.
// Setter: Sets values for attributes.Getter: Retrieves values of attributes.
// Display: Displays Admin-specific information.CalculateSalary: method to calculate Admin's total salary including allowances.



#include<iostream>
#include<string.h>
using namespace std;
struct employee
{
    double id;
    char name[50];
    int salary;

    employee()
    {
        this->id=0;
        strcpy(this->name,"NOT GIVEN");
        this->salary=0;
    }

    employee(int id,char* name,int salary)
    {
        this->id=id;
        strcpy(this->name,name);
        this->salary=salary;
    }

    void setId(int id)
    {
        this->id=id;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    int getId()
    {
        return this->id;
    }
    char* getName()
    {
        return this->name;
    }
    int getSalary()
    {
        return this->salary;
    }
    int CalSal()
    {
        return this->salary;
    }
    void virtual display()
    {
        cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()<<"\n";
    }
};
struct HR : public employee
{
    int id;
    char name[50];
    int salary;
    int commission;

    HR() : employee()
    {
        this->id=0;
        strcpy(this->name,"NOT GIVEN");
        this->salary=0;
        this->commission=0;
    }

    HR(int id,char* name,int salary,int commission) : employee(id,name,salary)
    {
        this->id=id;
        strcpy(this->name,name);
        this->salary=salary;
        this->commission=commission;
    }

    void setId(int id)
    {
        this->id=id;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    void setCommission(int commission)
    {
        this->commission=commission;
    }
    int getId()
    {
        return this->id;
    }
    char* getName()
    {
        return this->name;
    }
    int getSalary()
    {
        return this->salary;
    }
    int getCommission()
    {
        return this->commission;
    }
    int CalSal()
    {
        return this->salary+commission;
    }
    void display()
    {
        employee::display();
        //cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()<<"\n"
        cout<<"Commission: "<<getCommission()<<"\n";
    }
};

struct SalesManager : public employee
{
    int id;
    char name[50];
    int salary;
    int incentive;
    int target;

    SalesManager() : employee()
    {
        this->id=0;
        strcpy(this->name,"NOT GIVEN");
        this->salary=0;
        this->incentive=0;
        this->target=0;
    }

    SalesManager(int id,char* name,int salary,int incentive,int target) : employee(id,name,salary)
    {
        this->id=id;
        strcpy(this->name,name);
        this->salary=salary;
        this->incentive=incentive;
        this->target=target;
    }

    void setId(int id)
    {
        this->id=id;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    void setIncentive(int incentive)
    {
        this->incentive=incentive;
    }
    void setTarget(int target)
    {
        this->target=target;
    }
    int getId()
    {
        return this->id;
    }
    char* getName()
    {
        return this->name;
    }
    int getSalary()
    {
        return this->salary;
    }
    int getIncentive()
    {
        return this->incentive;
    }
    int getTarget()
    {
        return this->target;
    }
    int CalSal()
    {
        return this->salary+incentive;
    }
    void display()
    {
        employee::display();
        //cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()
        cout<<"Incentive: "<<getIncentive()<<"\n"<<"Target: "<<getTarget()<<"\n";
    }
};

struct Admin : public employee
{
    int id;
    char name[50];
    int salary;
    int allowance;

    Admin() : employee()
    {
        this->id=0;
        strcpy(this->name,"NOT GIVEN");
        this->salary=0;
        this->allowance=0;
    }

    Admin(int id,char* name,int salary,int allowance) : employee(id,name,salary)
    {
        this->id=id;
        strcpy(this->name,name);
        this->salary=salary;
        this->allowance=allowance;
    }

    void setId(int id)
    {
        this->id=id;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setSalary(int salary)
    {
        this->salary=salary;
    }
    void setAllowance(int allowance)
    {
        this->allowance=allowance;
    }
    int getId()
    {
        return this->id;
    }
    char* getName()
    {
        return this->name;
    }
    int getSalary()
    {
        return this->salary;
    }
    int getAllowance()
    {
        return this->allowance;
    }
    int CalSal()
    {
        return this->salary+allowance;
    }
    void display()
    {
        employee::display();
        //cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()
        cout<<"Allowance: "<<getAllowance();
    }
};
int main()
{
    employee e1(89,"Harsh",75000);
    cout<<"\n"<<"****************************************"<<"\n";
    e1.display();
    cout<<"\n"<<"****************************************"<<"\n";
    HR h1(89,"Harsh",75000,5000);
    cout<<"\n"<<"****************************************"<<"\n";
    h1.display();
    cout<<"\n"<<"****************************************"<<"\n";
    SalesManager s1(89,"Harsh",75000,5000,50);
    cout<<"\n"<<"****************************************"<<"\n";
    s1.display();
    cout<<"\n"<<"****************************************"<<"\n";
    Admin a1(89,"Harsh",75000,5000);
    cout<<"\n"<<"****************************************"<<"\n";
    a1.display();
    cout<<"\n"<<"****************************************"<<"\n";
}
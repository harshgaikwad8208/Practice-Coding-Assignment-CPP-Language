//Admin (id, name, salary, allowance)

#include<iostream>
#include<string.h>
using namespace std;
struct Admin
{
    int id;
    char name[50];
    int salary;
    int allowance;

    Admin()
    {
        this->id=0;
        strcpy(this->name,"NOT GIVEN");
        this->salary=0;
        this->allowance=0;
    }

    Admin(int id,char* name,int salary,int allowance)
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
    void display()
    {
        cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()<<"\n"<<"Allowance: "<<getAllowance();
    }
};
int main()
{
    Admin a1(89,"Harsh",75000,5000);
    a1.display();
}
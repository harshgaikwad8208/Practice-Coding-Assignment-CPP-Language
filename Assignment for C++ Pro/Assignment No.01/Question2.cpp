//fEmployee (id, name, salary)

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
    void display()
    {
        cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary();
    }
};
int main()
{
    employee e1(89,"Harsh",75000);
    e1.display();
}
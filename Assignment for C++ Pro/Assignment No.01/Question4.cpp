//HR (id, name, salary, commission)

#include<iostream>
#include<string.h>
using namespace std;
struct HR
{
    int id;
    char name[50];
    int salary;
    int commission;

    HR()
    {
        this->id=0;
        strcpy(this->name,"NOT GIVEN");
        this->salary=0;
        this->commission=0;
    }

    HR(int id,char* name,int salary,int commission)
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
    void display()
    {
        cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()<<"\n"<<"Commission: "<<getCommission();
    }
};
int main()
{
    HR h1(89,"Harsh",75000,5000);
    h1.display();
}
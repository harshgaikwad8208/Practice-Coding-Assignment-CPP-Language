//SalesManager (id, name, salary, incentive, target)

#include<iostream>
#include<string.h>
using namespace std;
struct SalesManager
{
    int id;
    char name[50];
    int salary;
    int incentive;
    int target;

    SalesManager()
    {
        this->id=0;
        strcpy(this->name,"NOT GIVEN");
        this->salary=0;
        this->incentive=0;
        this->target=0;
    }

    SalesManager(int id,char* name,int salary,int incentive,int target)
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
    void display()
    {
        cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()<<"\n"<<"Incentive: "<<getIncentive()<<"\n"<<"Target: "<<getTarget();;
    }
};
int main()
{
    SalesManager s1(89,"Harsh",75000,5000,50);
    s1.display();
}
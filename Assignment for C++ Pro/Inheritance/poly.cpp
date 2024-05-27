
#include<iostream>
#include<string.h>
using namespace std;
class employee
{
    double id;
    char name[50];
    int salary;
public:

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
    int virtual CalSal()
    {
        return this->salary;
    }
    void virtual display()
    {
        cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()<<"\n";
    }
};
class HR : public employee
{
    int id;
    char name[50];
    int salary;
    int commission;
public:
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

class SalesManager : public employee
{
    int id;
    char name[50];
    int salary;
    int incentive;
    int target;
public:
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
    virtual void display()
    {
        employee::display();
        //cout<<"ID: "<<getId()<<endl<<"Name: "<<getName()<<endl<<"Salary: "<<getSalary()
        cout<<"Incentive: "<<getIncentive()<<"\n"<<"Target: "<<getTarget()<<"\n";
    }
};

class Admin : public employee
{
    int id;
    char name[50];
    int salary;
    int allowance;
public:
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
        cout<<"Allowance: "<<getAllowance()<<"\n";
    }
};
int main()
{
     
    employee* em;
    employee e1(89,"Harsh",75000);
    em=&e1;
    cout<<"\n"<<"****************************************"<<"\n";
    em->display();
    cout<<"Employee total salary: "<<em->CalSal()<<"\n";
    cout<<"\n"<<"****************************************"<<"\n";
    HR h1(89,"Harsh",75000,5000);
    em=&h1;
    cout<<"\n"<<"****************************************"<<"\n";
    em->display();
    cout<<"HR total salary: "<<em->CalSal()<<"\n";
    cout<<"\n"<<"****************************************"<<"\n";
    SalesManager s1(89,"Harsh",75000,5000,50);
    em=&s1;
    cout<<"\n"<<"****************************************"<<"\n";
    em->display();
    cout<<"SalesManager total salary: "<<em->CalSal()<<"\n";
    cout<<"\n"<<"****************************************"<<"\n";
    Admin a1(89,"Harsh",75000,5000);
    em=&a1;
    cout<<"\n"<<"****************************************"<<"\n";
    em->display();
    cout<<"Admin total salary: "<<em->CalSal()<<"\n";
    cout<<"\n"<<"****************************************"<<"\n";
}
#include<stdio.h>
#include<string.h>
struct SalesManager
{
    double id;
    char name[50];
    double incentive;
    double target;
    double salary;

    void setid(int a)
    {
        this->id=a;
    }
    double getid()
    {
        return this->id;
        printf("ID : %lf\n",id);
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    char* getname()
    {
        return this->name;
        printf("Name : %s\n",name);
    }
    void setincentive(int i)
    {
        this->incentive=i;
    }
    double getincentive()
    {
        return this->incentive;
        printf("Incentive : %lf\n");
    }
    void settarget(int t)
    {
        this->target=t;
    }
    double gettarget()
    {
        return this->target;
        printf("Target : %lf\n",target);
    } 
    void setsalary(int s)
    {
        this->salary=s;
    }
    double getsalary()
    {
        return this->salary;
        printf("Salary : %lf\n",salary);
    }
    void display()
    {
        printf("id = %lf name = %s incentive = %lf target = %lf salary = %lf",id,name,incentive,target,salary);
    }
};
int main()
{
    SalesManager s1,s2;
    s1.setid(89);
    s1.getid();
    s1.setname("Harsh");
    s1.getname();
    s1.setincentive(50000);
    s1.getincentive();
    s1.settarget(50);
    s1.gettarget();
    s1.setsalary(50000);
    s1.getsalary();
    s1.display();
    
}
#include<stdio.h>
#include<string.h>
struct employee
{
    double id;
    char name[50];
    char company[50];
    double salary;

    void setid(int a)
    {
        this->id=a;
    }
    double getid()
    {
        return this->id;
        printf("ID = %lf\n",id);
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    char* getname()
    {
        return this->name;
        printf("Name = %s\n",name);
    }
    void setcompany(char* cmp)
    {
        strcpy(this->company,cmp);
    }
    char* getcompany()
    {
        return this->company;
        printf("Company = %s\n",company);
    }
    void setsalary(int s)
    {
        this->salary=s;
    }
    double getsalary()
    {
        return this->salary;
        printf("Salary = %lf\n",salary);
    }
    void display()
    {
        printf("id = %lf name = %s company = %s salary = %lf",id,name,company,salary);
    }
};
int main()
{
    employee s1,s2;
    s1.setid(89);
    s1.getid();
    s1.setname("Harsh");
    s1.getname();
    s1.setcompany("Google");
    s1.getcompany();
    s1.setsalary(50000);
    s1.getsalary();
    s1.display();
}
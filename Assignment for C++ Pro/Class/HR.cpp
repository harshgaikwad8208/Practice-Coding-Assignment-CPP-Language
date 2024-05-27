#include<stdio.h>
#include<string.h>
struct HR
{
    double id;
    char name[50];
    double commission;
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
    void setcommission(int b)
    {
        this->commission=b;
    }
    double getcommission()
    {
        return this->commission;
        printf("Commission = %lf\n",commission);
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
        printf("id = %lf name = %s Commission = %lf salary = %lf",id,name,commission,salary);
    }
};
int main()
{
    HR s1,s2;
    s1.setid(89);
    s1.getid();
    s1.setname("Harsh");
    s1.getname();
    s1.setcommission(50000);
    s1.getcommission();
    s1.setsalary(50000);
    s1.getsalary();
    s1.display();
}
#include<stdio.h>
#include<string.h>
struct admin
{
    double id;
    char name[50];
    double allowance;
    double salary;

    void setid(int a)
    {
        this->id=a;
    }
    double getid()
    {
        return this->id;
        //printf("ID = %lf\n",id);
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    char* getname()
    {
        return this->name;
        //printf("Name = %s\n",name);
    }
    void setallowance(int b)
    {
        this->allowance=b;
    }
    double getallowance()
    {
        return this->allowance;
        //printf("Allowance = %lf\n",allowance);
    }
    void setsalary(int s)
    {
        this->salary=s;
    }
    double getsalary()
    {
       return this->salary;
       // printf("Salary = %lf\n",salary);
    }
    void display()
    {
        printf("In Display\n");
        printf("id = %lf name = %s allowance = %lf salary = %lf\n",id,name,allowance,salary);
    }
};
int main()
{
    admin s1,s2;
    s1.setid(89);
    
    s1.setname("Harsh");
    
    s1.setallowance(50000);
   
    s1.setsalary(50000);
    
    s1.display();
    printf("Print by Getter:\n");
	printf("name: %s \nid: %d \nsalary: %.2lf \nAllowance: %.2lf\n",s1.getname(),s1.getid(),s1.getsalary(),s1.getallowance());
	return 0;
}
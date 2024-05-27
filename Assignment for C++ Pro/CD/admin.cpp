#include<stdio.h>
#include<string.h>

struct Employee
{
	int id;
	char name[20];
	double salary;
	double allowance;

    Employee()
    {
        this->id=0;
        strcpy(this->name,"Not given");
        this->salary=0;
        this->allowance=0;
    }
	Employee(int a,char* nm,double s,double b)
    {
        this->id=a;
        strcpy(this->name,nm);
        this->salary=s;
        this->allowance=b;
    }
	void SetId(int a)
    {
		this->id=a;
	}
	void SetName(const char* nm)
    {
		strcpy(this->name,nm);
	}
	void SetSalary(double s)
    {
		this->salary=s;
	}
	void SetAllowance(double b)
    {
		this->allowance=b;
	}
	int GetId()
    {
		return this->id;
	}
	char* GetName()
    {
		return this->name;
	}
	double GetSalary()
    {
		return this->salary;
	}
	double GetAllowance()
    {
		return this->allowance;
	}
	void display()
    {
			printf("Print by Display:\n");
			printf("name: %s \nid: %d \nsalary: %.2lf \nAllowance: %.2lf\n\n\n",GetName(),GetId(),GetSalary(),GetAllowance());
	}
	
};

int main()
{
	Employee e1;
    Employee e2(10,"Harsh",45000,35000);
	
	e1.display();
    e2.display();
	printf("Print by Getter:\n");
	printf("name: %s \nid: %d \nsalary: %.2lf \nAllowance: %.2lf\n",e2.GetName(),e2.GetId(),e2.GetSalary(),e2.GetAllowance());
	return 0;
}
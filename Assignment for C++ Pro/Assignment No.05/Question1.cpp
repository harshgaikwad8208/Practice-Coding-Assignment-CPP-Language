#include <iostream>
#include <string.h>
using namespace std;

class employee 
{
    int Id;
    char Name[20];
    double Salary;

public:
    employee() 
	{
        
        Id = 0;
        strcpy(Name, "Not");
        Salary = 0;
    }

    employee(int Id, char* Name, double Salary) 
	{
        
        this->Id = Id;
        strncpy(this->Name, Name, sizeof(this->Name) - 1);
        this->Name[sizeof(this->Name) - 1] = '\0'; // Ensure null-terminated
        this->Salary = Salary;
    }

    virtual void display() 
	{
        cout << "\nId = " << Id;
        cout << "\nName = " << Name;
        cout << "\nSalary = " << Salary << endl;
    }

    virtual double calsal()=0;			//abstract=it is pure virtual function


    void setId(int a) 
	{
        Id = a;
    }

    void setName( char* nm) 
	{
        strncpy(Name, nm, sizeof(Name) - 1);
        Name[sizeof(Name) - 1] = '\0'; // Ensure null-terminated
    }

    void setSalary(double a) 
	{
        Salary = a;
    }

    int getId() 
	{
        return Id;
    }

     char* getName() 
	 {
        return Name;
    }

    double getSalary() 
	{
        return Salary;
    }
};
struct SalesManager : public employee 
{
    double Incetive;

    SalesManager() : employee() 
	{
       
        Incetive = 0.0;
    }

    SalesManager(int id, char* name, double salary, double incetive) : employee(id, name, salary) 
	{
       
        Incetive = incetive;
    }

    void display() 
	{
        employee::display();
        printf("\nCommission is : %0.2lf", Incetive);
    }


    void setIncetive(double a) 
	{
        this->Incetive = a;
    }

    double getIncetive() 
	{
        return this->Incetive;
    }
    double calsal()
    {
    	return getSalary()+Incetive;
	}
};
struct admin : public employee 
{
    double Allowance;

    admin() : employee() 
	{
     
        Allowance = 0.0;
    }

    admin(int id, char* name, double salary, double allowance) : employee(id, name, salary) 
	{
    
        Allowance = allowance;
    }

    void display() 
	{
        employee::display();
        printf("\nAllowance is : %0.2lf", Allowance);
    }


    void setAllowance(double a) 
	{
        this->Allowance = a;
    }

    double getAllowance() {
        return this->Allowance;
    }
    double calsal()
    {
    	return getSalary()+Allowance;
	}
};

struct hr : public employee 
{
    double Commission;

    hr() : employee() 
	{
       
        Commission = 0.0;
    }

    hr(int id, char* name, double salary, double commission) : employee(id, name, salary) {
       
        Commission = commission;
    }

    void display() 
	{
        employee::display();
        printf("\nCommission is : %0.2lf", Commission);
    }


    void setCommission(double a) 
	{
        this->Commission = a;
    }

    double getCommission() 
	{
        return this->Commission;
    }
    double calsal()
    {
    	return getSalary()+Commission;
	}
};

void empAllDetails(employee*);

void empAllDetails(employee*ep)
{
	cout<<"Name"<<ep->getName()<<"\n";
	cout<<"Salary"<<ep->calsal()<<"\n";
	
	SalesManager* sm=dynamic_cast<SalesManager*>(ep);
	if(sm!=NULL)
	{
		cout<<"Incetive = "<<sm->getIncetive()<<"\n";
	}
	admin* s1=dynamic_cast<admin*>(ep);
	if(s1!=NULL)
	{
		cout<<"Allowance = "<<s1->getAllowance()<<"\n";
	}
	
	hr* h1=dynamic_cast<hr*>(ep);
	if(h1!=NULL)
	{
		cout<<"Incetive = "<<h1->getCommission()<<"\n";
	}
	
}

// int main() {
//     admin*ad;
//     admin s1(10, "pappya", 25000.0, 3000.0);
//     ad=&s1;
//     ad->display();

//     hr* hrr;
//     hr h1(20, "pintya", 20000.0, 1500.0);
//     hrr=&h1;
//     hrr->display();

//     employee*ep;
//     employee e1 (101,"Sachin",20000);
//     ep=&e1;
//     ep->display();


//     return 0;

int main() 
{
	
	employee*ep[3];
	ep[0]=new SalesManager(20,"preeti",5000.0,499);
    ep[1]=new admin(10, "Rahul", 25000.0, 3000.0);
    ep[2]=new hr(18, "Virat", 20000.0, 1500.0);
    
    empAllDetails(ep[0]);
	empAllDetails(ep[1]);
    empAllDetails(ep[2]);
    
    

    
}
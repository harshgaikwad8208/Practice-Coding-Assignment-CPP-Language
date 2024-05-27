#include<iostream>
#include<string.h>
using namespace std;
class Emp
{
	public:
	int id;
	char name[20];
	double salary;
	
	Emp()
	{
		this->id=0;
		strcpy(this->name,"Not given");
		this->salary=0;
	}
	Emp(int a,char* nm,double b)
	{
		this->id=a;
		strcpy(this->name,nm);
		this->salary=b;
	}
	virtual	void display()
	{
		cout<<"\nID : "<<id<<"\nName : "<<name<<"\nSalary : "<<salary<<"\n";
	}
	virtual double Calulate()
	{
		return salary;
	}
};
class SalesManager :public Emp
{
	public:
	double incentive;
	int target;
	
	SalesManager()
	{
	//	cout<<"default constructor called";
//		this->id=0;
//		strcpy(this->name,"Not given");
//		this->salary=0;
		this->incentive=0;
		this->target=0;
	}
	SalesManager(int a,char* b,double c,double d,int e):Emp(a,b,c)
	{
	//	cout<<"\nsales Parameterised constructor called";
//		this->id=a;
//		strcpy(this->name,b);
//		this->salary=c;
		this->incentive=d;
		this->target=e;
	}
	void display()
	{
		//cout<<"Salesmanager";
		Emp::display();
		cout<<"Incentive : "<<incentive;
		cout<<"\nTarget : "<<target<<"\n";
	}
	double Calulate()
	{
		return salary+this->incentive;
	}
};
class Admin : public Emp
{
	public:
		double allow;
		Admin():Emp()
		{
			this->allow=0;
			
		}
		Admin(int a,char*b,double c,double d):Emp(a,b,c)
		{
			this->allow=d;
		}
		void display()
		{
//			cout<<"\nAdmin";
			Emp::display();
			cout<<"Allowance : "<<allow<<"\n";
		}
		double Calulate()
	{
		return salary+this->allow;
	}
};
class Hr:public Emp
{
	public:
		double commission;
		Hr():Emp()
		{
			this->commission=0;
		}
		Hr(int a,char*b,double c,double d):Emp(a,b,c)
		{
			this->commission=d;
		}
		void display()
		{
//			cout<<"\nHR";
			Emp::display();
			cout<<"Commision : "<<commission<<"\n";
		}
		double Calulate()
	{
		return salary+this->commission;
	}
};

int main1()
{
	Emp e1(1,"Sachin",2000);
	e1.display();
	
	SalesManager s1(2,"Rahul",3000,3000,30000);
	s1.display();
	
	Admin a1(103,"Virat",40000,4000);
	a1.display();
	
	Hr h1(104,"Akash",20000,4500);
	h1.display();
	
}

int main2()
{
	Emp* ep;
	Emp e1(1,"Sachin",2000);
	ep=&e1;
	ep->display();
	
	SalesManager* sm;
	SalesManager s1(2,"Rahul",3000,3000,30000);
	sm=&s1;
	sm->display();
	
	Admin* ad;
	Admin a1(103,"Virat",40000,4000);
	ad=&a1;
	ad->display();
	
	Hr* hra;
	Hr h1(104,"Akash",20000,4500);
	hra=&h1;
	hra->display();
	
}

int main3()
{
	Emp* ep;
	Emp e1(1,"Sachin",2000);
	ep=&e1;
	ep->display();
	//Upcasting
	

	SalesManager s1(2,"Rahul",3000,3000,30000);
	ep=&s1;
	ep->display();
	
	Admin a1(103,"Virat",40000,4000);
	ep=&a1;
	ep->display();
	
	Hr h1(104,"Akash",20000,4500);
	ep=&h1;
	ep->display();
	
}

int main()
{
	Emp* ep;
	Emp e1(1,"Sachin",2000);
	ep=&e1;
	ep->display();
	cout<<"Empolyee Total salary : "<<ep->Calulate()<<"\n";
	

	SalesManager s1(2,"Rahul",3000,3000,30000);
	ep=&s1;
	ep->display();
	cout<<"Empolyee Total salary : "<<ep->Calulate()<<"\n";
	
	
	Admin a1(103,"Virat",40000,4000);
	ep=&a1;
	ep->display();
	cout<<"Empolyee Total salary : "<<ep->Calulate()<<"\n";
	

	Hr h1(104,"Akash",20000,4500);
	ep=&h1;
	ep->display();
	cout<<"Empolyee Total salary : "<<ep->Calulate()<<"\n";
	
}
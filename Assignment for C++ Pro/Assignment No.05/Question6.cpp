#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
class Bank_account
{
	char name[20];
	int age;
	int pan;
	double balance;
	public :
	Bank_account()
	{
		cout<<"\ndefault constructor bank account\n";
		strcpy(this->name,"not given");
		this->age=0;
		this->pan=0;
		this->balance=0;
	}
	Bank_account(char *nm,int a,int p,double b)
	{
		cout<<"\ndefault constructor bank account\n";
		strcpy(this->name,nm);
		this->age=a;
		this->pan=p;
		this->balance=b;
	}
	void display()
	{
		cout<<"Account holder name    :"<<this->name<<"\n"<<"Age     :"<<this->age<<"\n"<<"Pan card number"<<this->pan<<"\n"<<"Available balance is   :"<<this->balance<<"\n";
	}
	void setName(char*nm)
	{
		strcpy(this->name,nm);
	}
	void setAge(int a)
	{
		this->age=a;
	}
	void setPan(int p)
	{
		this->pan=p;
		
	}
	void setBalance(double b)
	{
		this->balance;
	}
	virtual double withdraw()
	{
		return balance;
	}
	char* getName()
	{
		return this->name;
	}
	int getAge()
	{
		return this->age;
	}
	int getPan()
	{
		return this->pan;
	}
	double getBalance()
	{
	}
		return this->balance;
	}
};
class Savings:public Bank_account
{
	int interest;
	public:
	Savings():Bank_account()
	{
		cout<<"\ndefault constructor savings account\n";
		this->interest=0;
		
	}
	Savings(char *nm,int a,int p,double b,int i):Bank_account(nm,a,p,b)
	{
		cout<<"\ndefault constructor savings account\n";
		this->interest=i;
	}
	void display()
	{
	    Bank_account::display();
		cout<<"interest rate is   :"<<this->interest<<"\n";  
	}
	void setInterest(int i)
	{
		this->interest=i;
	}
	double withdraw()
	{
		//cout<<"\nwithdraw money through debit card\t:\t"<< 
		return getBalance()-5000;//<<"\n";
	}
	int getInterest()
	{
		return this->interest;
	}
};
class Current: public Bank_account
{
	double overdraft;
	public :
	Current()
	{
		cout<<"\ndefault current account constructor\n";
		this->overdraft=0;
	}
	Current(char *nm,int a,int p,double b,int o):Bank_account(nm,a,p,b)
	{
		cout<<"\nparameterised current account constructor\n";
		this->overdraft=o;
	}
	void display()
	{
		Bank_account::display();
		cout<<"Over draft limit is   :"<<this->overdraft<<"\n";
	}
	void setOverdraft(int o)
	{
		this->overdraft=o;
	}
	double withdraw()
	{
		//cout<<"\nWithdrawing money through check  :\t"<< 
		return getBalance()-5000;
		//<<"\n";
	}
	double getOverdraft()
	{
	
		return this->overdraft;
	}
};
class Fixdeposit:public Bank_account
{
	int tenures;
	public :
	Fixdeposit()
	{
		cout<<"\ndefault constructor of fixdeposit\n";
		this->tenures=0;
		
	}
	Fixdeposit(char *nm,int a,int p,double b,int t):Bank_account(nm,a,p,b)
	{
		cout<<"\nparameterised constructor of fixdeposit\n";
		this->tenures=t;
		
	}
	void display()
	{
		Bank_account::display();
		cout<<"Tenures  :"<<this->tenures<<"\n";
		
	}
	void setTenures(int t)
	{
		this->tenures=t;
	}
	double withdraw()
	{
		//cout<<"\nWithdrawing money through term completion  :\t"<<
		return getBalance()-5000;//<<"\n";
	}
	int getTenures()
	{
		return this->tenures;
	}
};
int main()
{
	Savings s1;
	Current c1;
	Fixdeposit f1;
	Bank_account *bk;
	cout<<"\n\n*********************************Savings Account****************************************";
	Savings s2("Darshan",22,54545,25000,10);
	bk=&s2;
	bk->display();
	cout<<"Withdrawl balance  :"<<bk->withdraw()<<"\n";
	cout<<"\n\n*********************************Fixdeposit Account****************************************";
	Fixdeposit f2("Aditya",23,112211,5600,2);
	bk=&f2;
	bk->display();
	cout<<"Withdrawl balance  :"<<bk->withdraw()<<"\n";
	cout<<"\n\n*********************************Current Account****************************************";
	Current c2("Sakshi",24,668877,30000,50000);
	bk=&c2;
	bk->display();
	cout<<"Withdrawl balance  :"<<bk->withdraw()<<"\n";
	return 0;
}

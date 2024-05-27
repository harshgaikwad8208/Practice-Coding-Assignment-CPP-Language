#include<stdio.h>
#include<string.h>
#include<iostream>
using namespace std;

class ATMCard
{
	char bname[40];
	char cust[40];
	int cvv;
	int acc_no;
	
	public:
	ATMCard()
	{
		cout<<"\n ATM default constructor";
		strcpy(this->bname,"not given");
		strcpy(this->cust,"not given");
		this->cvv=0;
		this->acc_no=0;
	}
	
	ATMCard(char* n, char* m,int c,int a)
	{
		cout<<"\n ATM parameterized constructor";
		strcpy(this->bname,n);
		strcpy(this->cust,m);
		this->cvv=c;
		this->acc_no=a;
	}
	
	void setBName(char* n)
	{
		strcpy(this->bname,n);
	}
	
	void setCustName(char* m)
	{
		strcpy(this->cust,m);
	}
	
	void setCvv(int c)
	{
		this->cvv=c;
	}
	
	void setAccNo(int c)
	{
		this->acc_no=c;
	}
	
	char* getBName()
	{
		return this->bname;
	}
	
	char* getCustName()
	{
		return this->cust;
	}
	
	int getCvv()
	{
		return this->cvv;
	}
	
	int getAccNo()
	{
		return this->acc_no;
	}
	
	void display()
	{
		cout<<"\n"<<" Bank Name: "<<getBName() <<"\n Cust Name:" <<getCustName() <<"\n Cvv:" <<getCvv() <<"\n Acc no:"<<getAccNo();
	}
};

class DebitCard:public ATMCard
{
	int min_bal;
	int limit;
	
	public:
	DebitCard():ATMCard()
	{
		cout<<"\n Debit card default constructor";
		this->min_bal=0;
		this->limit=0;
	}
	
	DebitCard(char* n, char* m,int c,int a,int x,int y ): ATMCard(n,m,c,a)
	{
		cout<<"\n Debit card parameterized constructor";
		this->min_bal=x;
		this->limit=y;
	}
	
	void setMinBal(int n)
	{
		this->min_bal=n;
	}
	
	void setLimit(int a)
	{
		this->limit=a;
	}	
	
	int setMinBal()
	{
		return this->min_bal;
	}
	
	int setLimit()
	{
		return this->limit;
	}
	
	void display()
	{
		ATMCard::display();
		cout<<"\n Min bal: "<<min_bal <<"\n Limit: "<<limit;
	}	
};

class CrebitCard:public ATMCard
{
	double a_fee;
	double j_fee;
	int limit;
	
	public:
	CrebitCard():ATMCard()
	{
		cout<<"\n Credit card default constructor";
		this->a_fee=0;
		this->j_fee=0;
		this->limit=0;
	}
	
	CrebitCard(char* n, char* m,int c,int a,double x,double y,int z ): ATMCard(n,m,c,a)
	{
		cout<<"\n Credit card parameterized constructor";
		this->a_fee=x;
		this->j_fee=y;
		this->limit=z;
	}
	
	void setAFee(double n)
	{
		this->a_fee=n;
	}
	
	void setJFee(double n)
	{
		this->j_fee=n;
	}
	
	void setLimit(int a)
	{
		this->limit=a;
	}	
	
	double getAFee()
	{
		return this->a_fee;
	}
	
	double getJFee()
	{
		return this->j_fee;
	}
	
	int setLimit()
	{
		return this->limit;
	}
	
	void display()
	{
		ATMCard::display();
		cout<<"\n Annual Fee: "<<a_fee <<"\n Joining Fee: "<<j_fee <<"\n Limit: "<<limit;
	}	
};

int main()
{
	DebitCard d1;
	d1.display();
	cout<<"\n";
	
	DebitCard d2("ICICI","DARSHAN",598,78451296,1000,20000);
	d2.display();
	cout<<"\n";
	
	CrebitCard c1;
	c1.display();
	cout<<"\n";
	
	CrebitCard c2("IDBI","ADITYA",999,12121212,5000,1000,50000);
	c2.display();
}

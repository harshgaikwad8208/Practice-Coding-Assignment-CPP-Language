// Write a function to approve the loan for student based on there percentage and for employee based on there annual salary.

// Condition for student:
// Above 80: 2 lakh
// Between 60-80: 1 lakh
// Between 40-50: 50 k
// Below 40: no loan approved

// Condition for employee:
// Above 12 LPA: 7 lakh
// Between 10-12 lpa: 6 lakh
// Between 6-10 lpa: 5 lakh
// Between 4-6 lpa: 4 lakh
// Below 4 lpa: no loan approve

#include<stdio.h>
#include<string.h>
struct Student
{
	int roll;
	char name[10];
	float perc;
	
	 Student()
     {
     	printf("DEFAULT CONSTRUCTOR");
     	this->roll=10;
     	strcpy(this->name,"Rushiksh");
     	this->perc=0;
     	
	 }
	 
	 Student(int i,char*nm,float p)
	 {
	 	printf("\nPARAMETERISE CONSTRUCTOR\n");
     	this->roll=i;
     	strcpy(this->name,nm);
     	this->perc=p;
     
	 	
	 }
	
	void display()
	{
		printf("roll no:%d\nname:%s\n\n",roll,name);
	}
	
	void setroll(int a)
	{
		this->roll=a;
	}
	void setname(char *n)
	{
	 strcpy(this->name,n);
	}
	void setperc(float d)
	{
		this->perc=d;
	}
	int getroll()
	{
		return this->roll;
		
	}
	char* getname()
	{
		return this->name;
	}
	float getperc()
	{
		return this->perc;
	}
	
};

 struct Employee
 {
 	int id;
 	char name[10];
 	double sal;
 	
 	Employee()
     {
     
     	this->id=10;
     	strcpy(this->name,"Raj");
     	this->sal=10000;
     	
	 }
	  Employee(int i,char*nm,double s)
	 {
	 	
     	this->id=i;
     	strcpy(this->name,nm);
     	this->sal=s;
	 	
	 }
	
	void display()
	{
		printf("ID:%d\nNAME:%s\nSALARY:%lf\n\n",id,name,sal);
	}
	
	void setid(int a)
	{
		this->id=a;
	}
	void setname(char *n)
	{
	 strcpy(this->name,n);
	}
	void setsal(double s)
	{
		this->sal=s;
	}
	int getid()
	{
		return this->id;
		
	}
	char* getname()
	{
		return this->name;
	}
	double getsal()
	{
		return this->sal;
	} 
	
 };
 struct Bank
 {
 	distributionLoan(Student s1)
 	{
 		if(s1.perc>=80)
 		
 			printf("2 Lakhs Is Approved\n");
		 
		 else if(s1.perc<=80&&s1.perc>=50)
		
		    printf("1 Lakh Is Approved\n");
			
		else
		    
			printf("SORRY NOT APPROVED!\n");
	}
	distributionLoan(Employee e1)
	{
		if(e1.sal>=50000)
		printf("5 LAKHS LOAN APPROVED]n");
		
		else if(e1.sal<=50000&&e1.sal>=40000)
		printf("4 LAKHS LOAN APPROVED\n");
		
		else if(e1.sal>=20000)
		printf("2 LAKHS LOAN APPROVED\n");
		
		else
		printf("SORRY  LOAN NOT APPROVED!\n");
	}
 };
 int main()
 {
 	Bank b1;
 	Student s1(18,"Darshan",83);
 	Employee e1(69,"Aditya",59999);
 	int r=b1.distributionLoan(s1);
 	int r2=b1.distributionLoan(e1);
 	s1.display();
 	e1.display();
 }
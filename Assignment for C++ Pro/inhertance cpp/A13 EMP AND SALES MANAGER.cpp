#include<iostream>
using namespace std;
#include<string.h>

struct employee{
	
	
	int id;
	char name[20];
	int salary;
//	void display(){
//		
//		cout<<this->id,this->salary,this->name;
//		
//	}
	
	
};

struct salesmanager:public employee{
	
	double incentive;
	int target;
	
	
	salesmanager(){
		cout<<"default constructor is called "<<endl;
		this->id=0;
		strcpy(this->name,"not");
		this->salary=0;
		this->incentive=00;
		this->target=00;
		
		
	}
	salesmanager(int i,char nm[],int s,double inc,int tar){
			cout<<"cons  is called "<<endl;
			this->id=i;
		strcpy(this->name,nm);
		this->salary=s;
		this->incentive=inc;
		this->target=tar;
		
	}
	
};

int main(){
	
	
	salesmanager e1;
	e1.id;
	e1.salary;
	e1.name;
	e1.salary;
	e1.incentive;
	e1.target;
	
	
//	e1.display();

	
}
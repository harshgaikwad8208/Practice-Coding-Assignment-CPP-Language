#include<iostream>
using namespace std;
#include<string.h>

struct employee{
	
	
	int id;
	char name[20];
	int salary;

	employee(){
		cout<<"default constructor is called of emp   "<<endl;
		this->id=0;
		strcpy(this->name,"not");
		this->salary=0;
}
employee(int i,char nm[],int sal){
	cout<<"parameter constructur is called of employee"<<endl;
	this->id=i;
	strcpy(this->name,nm);
	this->salary=sal;
}
void display(){
	
	cout<<"id:"<<this->id<<endl;
	cout<<"name:"<<this->name<<endl;
	cout<<"salary:"<<this->salary<<endl;
}


	
};

struct salesmanager:public employee{
	
	double incentive;
	int target;
	
	
	salesmanager():employee(){
		cout<<"default constructor is called of salesmanager is called  "<<endl;
		this->id=0;
		strcpy(this->name,"not");
		this->salary=0;
		this->incentive=00;
		this->target=00;
		
		
	}
	
	salesmanager(int i,char nm[], int sal,double inc,int tar):employee(i,nm,sal){
			cout<<"para const of sales manager is called  "<<endl;
//			this->id=i;
//		strcpy(this->name,nm);
//		this->salary=s;
		this->incentive=inc;
		this->target=tar;
	}
	void display(){
		
		employee::display();

		//	emp::diplay();
			cout<<"incentive:"<<this->incentive<<"\n"<<endl;
			cout<<"target:"<<this->target<<endl;
		
		
	}
	
};

int main(){
	
	
    salesmanager e1;
	salesmanager e2(2,"shahid",288,211,21);
//	e1.id;
//	e1.salary;
//	e1.name;
//	e1.salary;
//	e1.incentive;
//	e1.target;
	e2.display();
	
//	e1.display();

	
}
#include<iostream>
using namespace std;
#include<string.h>

struct employee{
	
	
	int id;
	char name[20];
	int salary;

	employee(){
		cout<<"default constructor is called of emp "<<endl;
		this->id=0;
		strcpy(this->name,"not");
		this->salary=0;
}
employee(int i,char nm[],int sal){
	
	this->id=i;
	strcpy(this->name,nm);
	this->salary=sal;
}
	void display(){
		
		cout<<"id"<<this->id<<endl;
		cout<<"salary"<<this->salary<<endl;
		cout<<"name"<<this->name<<endl;
		
	}
	
};

struct admin:public employee{
	
	double allo;
	
	admin(){
		cout<<"default const of admin is called"<<endl;
		this->allo=0;
		
	}
	admin(int id, char * nm,int sal,double al):employee(id,name,salary){
	
		
		this->allo=al;
	}
	void display(){
		employee::display();
		cout<<"allo"<<this->allo<<endl;
	}
	
};



int main(){
	
	
	admin a2;
	admin a(1,"shahid",21,2011);
		
		a.display();
		
}
	

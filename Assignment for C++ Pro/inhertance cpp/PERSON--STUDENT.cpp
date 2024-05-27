#include<iostream>
using namespace std;
 struct person{
 	
 
 	int age;
 		char name[20];
 	char gender[10];
 	
 	
 	
 	person(){
 		
 		this->age=0;
 		strcpy(this->name,"not given");
 		strcpy(this->gender,"not given");
 		
 	}
 		person(int a, char*nm,char*n){
 			cout<<"person para is called"<<endl;
 				this->age=a;
 		strcpy(this->name,nm);
 		strcpy(this->gender,n);
 			
		 }
		 void display(){
		 
		 	cout<<"age"<<this->age<<endl;
		 		cout<<"name"<<this->name<<endl;
		 	cout<<"gemder"<<this->gender<<endl;
		 	
		 }
	};
		 
		 
		 struct student:public person{
		 	
		 	int marks;
		 	char  classs[20];
		 	int roll_no;
		 	
		 	 	student ():person(){
 		
 		this->marks=0;
 		strcpy(this->classs,"not given");
 		
 	this->roll_no=0;
 		
 	}
 		student (int a,char *n,char *nmm,int m, char*nm,int r):person(a,n,nm){
 			cout<<"student para is called"<<endl;
 				this->marks=m;
 strcpy(	this->classs,nm);
 	this->roll_no=r;
 			
		 }
		 void display(){
		 	
		 	person::display();
		 	cout<<"marks"<<this->marks<<endl;
		 	cout<<"roll"<<this->roll_no<<endl;
		 	cout<<"class"<<this->classs<<endl;
		 }
		 	
		 };
		 int main(){
		 	
		 	student s(22,"shahid","male",68,"teenth",22 );
		 	s.display();
		 }
 		
 		
 		
	 

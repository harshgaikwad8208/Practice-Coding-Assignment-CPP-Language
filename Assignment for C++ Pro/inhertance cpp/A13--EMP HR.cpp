#include<iostream>
using namespace std;


struct emp{
	
	int id;
	char name[20];
	
	
	double salary;
	
emp(){
	
	cout<<"default cons is called of emp"<<endl;
	this->id=0;
	this->salary=0;
	strcpy(this->name,"not given");
}
emp(int i,char *nm,double sal){
	
	cout<<"para cons is called of emp"<<endl;
	this->id=i;
strcpy(this->name,nm);
this->salary=sal;
	
}
void display(){
	
	cout<<"id"<<this->id<<endl;
	cout<<"name"<<this->name<<endl;
	cout<<"salary"<<this->salary<<endl;
}


};

struct hr:public emp{
	
	int commession;
	
hr():emp(){
	cout<<"hr of default is called"<<endl;
	this->commession=00;
	
}
hr(int i,char *nm,double sal,int com) :emp(i,nm,sal){
	cout<<"const of hr is called"<<endl;
		this->commession=com;
}
void display(){
	emp::display();
	
	cout<<"comm"<<this->commession<<endl;
	
	
}


	
	
};


int main(){
	hr h(1,"shahid",1200,299);
	h.display();
	
}
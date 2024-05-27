#include<iostream>

using namespace std;


 struct Vehicle{
 	
 	char name[20];
 	int wheel;
 	int price;
 	char colour[20];
 	
 	
 	
 	
 	Vehicle(){
 		
 		strcpy(this->name,"not given");
 		this->wheel=0;
 		this->price=0;
 		strcpy(this->colour,"black");
 	}
 		
 		Vehicle(char *nm,int w,int pri,char * col){
 			
 			
 			strcpy(this->name,nm);
 			this->wheel=w;
 			this->price=pri;
 			strcpy(this->colour,col);
		 }
		 void display(){
		 	
		 	cout<<"name:"<<this->name<<endl;
		 	cout<<"wheel:"<<this->wheel<<endl;
		 	cout<<"price:"<<this->price<<endl;
		 	cout<<"coulour"<<this->colour<<endl;
		 	
		 }
	 
 };
 
 struct bike:public Vehicle{
 	int engine;
 	double fuel;
 	
 	bike():Vehicle(){
	 
 		this->engine=0;
 		this->fuel=0;
 }
 
 bike(char *nm,int w,int pri,char *col,int e,double f):Vehicle(nm,w,pri,col){
 	
 	this->engine=e;
 	this->fuel=f;
 	
 	
 }
 void display(){
 	cout<<"vehicle details"<<endl;
 	Vehicle::display();
 	cout<<"engine"<<this->engine<<endl;
 	cout<<"fuel"<<this->fuel<<endl;
 	
 }
 	
 };
struct cycle:public Vehicle{
	
	int paddle;
	
	cycle(){
		
		this->paddle=0;
	}
	cycle(char*nm,int w,int pri,char *col,int p):Vehicle(nm,w,pri,col){
		this->paddle=p;
		
	}
	void display(){
			cout<<"\n"<<endl;
		cout<<"cycle details"<<endl;
		Vehicle::display();
	
		cout<<"paddle"<<this->paddle<<endl;
	}
	
}; 
 
 int main(){
 	
 	bike b1("BMW",4,1000,"BLACK",120,12);
 	
 	b1.display();
 	
 	cycle c("ranger",2,2000,"WHITE",2);
 	c.display();
 	
 	
 }
 

	

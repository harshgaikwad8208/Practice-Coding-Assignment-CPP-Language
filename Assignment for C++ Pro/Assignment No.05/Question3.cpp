using namespace std;
#include<iostream>
#include<string.h>
struct vehicle
{
	char name[20];
	int model_no;
	double price;
	
	vehicle()
	{
		this->model_no=0;
		strcpy(this->name,"not given");
		this->price=0;
	}
	
	vehicle(int md,char* name,double p)
	{
		this->model_no=md;
		strcpy(this->name,name);
		this->price=p;
	}
	
	void setmodel_no(int md)
	{
		this->model_no=md;
	}
	void setname(char* name)
	{
		strcpy(this->name,name);
	}
	void setprice(double p)
	{
		this->price=p;
	}
	int getmodel_no()
	{
		return this->model_no;
	}
	char* getname()
	{
		return this->name;
	}
	double getprice()
	{
		return this->price;
	}
	
	void display()
	{
		cout<<"Model Number:"<<this->model_no<<endl;
		cout<<"Model Name:"<<this->name<<endl;
		cout<<"Model Price:"<<this->price<<endl;
	}

	
};

struct car : public vehicle
{
	int wheels;
	char brake[20];
	
	car()
	{
		this->wheels=0;
		strcpy(this->brake,brake);
	}
	
	car(int md,char* name,double p,int w,char* b):vehicle(md,name,p)
	{
		this->wheels=w;
		strcpy(this->brake,brake);
	}
	
	void setwheels(int w)
	{
		this->wheels=w;
	}
	
	void setbrake(char* b)
	{
		strcpy(this->brake,brake);
	}
	
	int getwheels()
	{
		return this->wheels;
		
	}
	
	char* getbrake()
	{
		return this->brake;
	}
	
	void display()
	{
		vehicle::display();
		cout<<"No of wheels: "<<this->wheels<<endl;
		cout<<"What type of brake:"<<this->brake<<endl;
		cout<<"Bus has stopped by Drum Brake"<<endl;
	}
	
};

struct bus : public vehicle
{
	char brake_2[20];
	int seats;
	
	bus()
	{
		strcpy(this->brake_2,"not given");
		this->seats=0;
	}
	
	bus(int md,char* name,double p,char* br,int s):vehicle(md,name,p) 
	{
		strcpy(this->brake_2,br);
		this->seats=s;
	}
	
	void setbrake_2(char* br)
	{
		strcpy(this->brake_2,br);
		
	}
	
	void setseats(int s)
	{
		this->seats=s;
	}
	
	char* getbrake_2()
	{
		return this->brake_2;
	}
	
	int getseats()
	{
		return this->seats;
	}
	
	void display()
	{
		vehicle::display();
		cout<<"Type of Brake:"<<this->brake_2<<endl;
		cout<<"No of seats:"<<this->seats<<endl;
		cout<<"Bus
		 has stopped by Air Brake"<<endl;
	}
	
};
int main()
{
	vehicle* vh;
	vehicle v1(1221,"Vehicle",3000000);
	vh=&v1;
	vh->display();
	
	
	car c1(1221,"BMW",1400000,"Drum Brake");
	vh=&c1
	vh->display();
	 
	bus b1(2231,"Red Bus",2400000,"Air Brake",10);
	vh=&b1;
	vh->display();
}

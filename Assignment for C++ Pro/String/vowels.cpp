#include<iostream>
using namespace std;


class Vehicle
{
	int noPerson;
	int wheels;
	public:
	Vehicle()
    {
		this->wheels=0;
		this->noPerson=0;
	}
	Vehicle(int w,int p)
    {
		this->wheels=w;
		this->noPerson=p;
	}
	void setWheel(int w)
    {
		this->wheels=w;
		
	}
	void setPerson(int p)
    {
		
		this->noPerson=p;
	}
	
	int getWheel()
    {
		return this->wheels;
	}
	int getPerson()
    {
		return this->noPerson;
	}	
	virtual void display()=0;
	virtual int calToll()=0;
};
class TwoWheeler:public Vehicle
{
   
	public:
	TwoWheeler()
    {
		this->setWheel(0);
		this->setPerson(0);
	}	
	TwoWheeler(int w,int p)
    {
		this->setWheel(w);
		this->setPerson(p);
	}	
		
	void display()
    {
		cout<<"no of wheels:"<<getWheel();
	}
	int calToll()
    {
		int toll=20;
		int ex=0;
		int p=getPerson();
		if(p>2)
		{
			ex=(p-2)*10;
		}
		toll=toll+ex;
		return toll;
	}
	
};
class ThreeWheeler:public Vehicle
{
		public:
		ThreeWheeler()
		{
		this->setWheel(0);
		this->setPerson(0);
		}	
	ThreeWheeler(int w,int p)
	{
		this->setWheel(w);
		this->setPerson(p);
	}		
	void display()
	{
		cout<<"no of wheels:"<<getWheel();
	}
	int calToll()
	{
		int toll=30;
		int ex=0;
		int p=getPerson();
		if(p>3)
		{
			ex=(p-3)*20;
		}
		toll=toll+ex;
		return toll;
	}
};
class FourWheeler:public Vehicle
{
	public:
		FourWheeler()
		{
		this->setWheel(0);
		this->setPerson(0);
	}	
	FourWheeler(int w,int p)
	{
		this->setWheel(w);
		this->setPerson(p);
	}	
	void display()
	{
		cout<<"no of wheels:"<<getWheel();
	}
	int calToll()
	{
		int toll=40;
		int ex=0;
		int p=getPerson();
		if(p>4){
			ex=(p-4)*40;
		}
		toll=toll+ex;
		return toll;
	}
};
class HeavyVehicle:public Vehicle

{
	public:
		HeavyVehicle()
		{
		this->setWheel(0);
		this->setPerson(0);
	}	
	HeavyVehicle(int w,int p)
	{
		this->setWheel(w);
		this->setPerson(p);
	}	
	void display(){
		cout<<"no of wheels:"<<getWheel();
	}
	int calToll(){
		int toll=60;
		int ex=0;
		int p=getPerson();
		if(p>6){
			ex=(p-6)*100;
		}
		toll=toll+ex;
		return toll;
	}
};



int main(){
	Vehicle* v;
	
	TwoWheeler t;
	ThreeWheeler r;
	FourWheeler f;
	HeavyVehicle h;
	int choice,exit=1,np,toll=0;
	do{
	
	cout<<"Toll Calculator:"<<endl;
	cout<<"1.Two wheeler"<<endl;
	cout<<"2.three wheeer"<<endl;
	cout<<"3.four wheeler"<<endl;
		cout<<"4.heavy vehicle"<<endl;
			cout<<"enter your choice:"<<endl;
	cin>>choice;
	//cout<<"enter number of person:";
	//cin>>np;
	switch(choice)
	{
		case 1:
			cout<<"enter number of person:";
			cin>>np;
			t.setWheel(2);
			t.setPerson(np);
			v=&t;
			toll=v->calToll();
			cout<<"Toll is:"<<toll<<endl;			
			break;
		case 2:
			cout<<"enter number of person:";
		cin>>np;
			r.setWheel(3);
			r.setPerson(np);
			v=&r;
			toll=v->calToll();
			cout<<"Toll is:"<<toll<<endl;
			break;
		case 3:
			cout<<"enter number of person:";
			cin>>np;
			f.setWheel(4);
			f.setPerson(np);
			v=&f;
			toll=v->calToll();
			cout<<"Toll is:"<<toll<<endl;
			break;
		case 4:
			cout<<"enter number of person:";
			cin>>np;
			h.setWheel(6);
			h.setPerson(np);
			v=&h;
			toll =v->calToll();
			cout<<"Toll is:"<<toll<<endl;
			break;
		default:
				cout<<"invalid choice entered"<<endl;
			break;		
	}
			cout<<"do you wanna continue? 1 for yes and 0 for no"<<endl;
			cin>>exit;
	
		}while(exit!= 0);
	return 0;
}
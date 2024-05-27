#include<iostream>
using namespace std;


struct animal{
	
	char name[20];
	
	
	char diet[20];
	

	int lifespan;
	
	
	animal(){
		
		strcpy(this->name,"not give");
		strcpy(this->diet,"not given");
	
		this->lifespan=0;
	}
	
	
	animal(char * nm, char *d,int lif){
			
		strcpy(this->name,nm);
		strcpy(this->diet,d);
	
		this->lifespan=lif;
		
	}
	
	void display(){
		
		cout<<"name"<<this->name<<endl;
		
		cout<<"diet"<<this->diet<<endl;

		cout<<"lifespan:"<<this->lifespan<<endl;
	}
	
	
};

struct fish:public animal{
	
	char gilltype[20];
	char watertype[20];
	int fins;
	
	
		fish():animal(){
		
		strcpy(this->gilltype,"not give");
		strcpy(this->watertype,"not given");
		this->fins=0;
	
	}
		fish(char * nm, char *d,int lif,char *g,char *w,int f):animal(nm,d,lif){
			
		strcpy(this->gilltype,g);
		strcpy(this->watertype,w);
		this->fins=f;
}
	void display(){
		
		animal:display();
			cout<<this->gilltype<<endl;
			cout<<this->watertype<<endl;
			cout<<this->fins<<endl;
			
	}
	
	
	
	
};

int main(){
	
	fish f("aqua","corniviorus",120,"SCALY","MARINE",2);
	
	f.display();
	
	
	
}
























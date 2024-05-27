#include<iostream>
using namespace std;


struct player{
	
	char name[20];
	
	int matches;
	
	int jersyno;
	
	
	player(){
		strcpy(this->name,"not given");
		this->matches=0;
		this->jersyno=0;
		
	}
	player(char * nm,int m,int j){
		
			strcpy(this->name,nm);
		this->matches=m;
		this->jersyno=j;
	}
	
	void display(){
		
		cout<<"name"<<this->name<<endl;
		cout<<"matches"<<this->matches<<endl;
		cout<<"jercyno"<<this->jersyno<<endl;
	}
	
};

struct CRIplayer:public player{
	
	int runs;
	int wickets;
	
	
		CRIplayer():player(){
	
		this->runs=0;
		this->wickets=0;
		
	}
		CRIplayer(char * nm,int m,int j,int r,int w):player(nm,m,j){
		
		
		this->runs=r;
		this->wickets=w;
	}
	
	void display(){
		cout<<"cricket player"<<endl;
		player::display();
		cout<<"runs"<<this->runs<<endl;
		cout<<"wickets"<<this->wickets<<endl;
		cout<<"\n"<<endl;
	}
	
	
	
	
	
};

struct FOTplayer:player{
	
	
	int goals;
	
	FOTplayer():player(){
		
		this->goals=0;
		
		
	}
		FOTplayer(char * nm,int m,int j,int g):player(nm,m,j){
			
			
			this->goals=g;
		}
	void display(){
		cout<<"foot player"<<endl;
		player::display();
		cout<<"goals"<<this->goals<<endl;
		
	}
	
};

int main(){
	
	
	CRIplayer c("shahid",220,21,2000,54);
	c.display();
	
	FOTplayer f("owias",98,43,998);
	f.display();
}

















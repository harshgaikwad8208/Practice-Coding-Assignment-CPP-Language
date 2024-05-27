#include<iostream>
#include<string.h>
using namespace std;
class wallAccessories
{
	double price;
	char material[20];
	char color[20];
	int size;
	
	public:
	virtual void display()
	{
		cout<<"\nprice:"<<price<<"\nmaterial:"<<material<<"\ncolor: "<<color<<"\nsize:"<<size;
	}
	
	virtual void hang()
	{
		cout<< "hang by ";
	}
	wallAccessories()
	{
		cout<<"\n\n wall Accessories default constructor called";
		this->price=0;
		strcpy(this->material,"not given");
		strcpy(this->color,"not given");
		this->size=0;
	}
	wallAccessories(double p, char* m, char* c,int s )
	{
		cout<<"\n\n machine parameterized contructor called";
		this->price=p;
		strcpy(this->material,m);
		strcpy(this->color,c);
		this->size=s;
	}
	void setPrice(double p)
	{
		this->price =p;
	}
	
	void setName(char* m)
	{
		strcpy(this->material,m);
	}
	
	void setColor(char* c)
	{
		strcpy(this->color, c);
	}
	
	void setSize(int s)
	{
		this->size = s;
	}
	
	double getPrice( )
	{
		return this->price;
	}
	
	char* getMaterial()
	{
		return this->material;
	}
	
	char* getColor()
	{
		return this->color;
	}
	
	int getSize()
	{
		this->size;
	}
	
	
};

class painting : public wallAccessories
{
	char artist[20];
	char paintingStyle[20];
	
	
public:
	void setArtist(char* a)
	{
		strcpy(this->artist ,a);
	}

	char* getArtist()
	{
		return this->artist ;
	}
	
	void setpaintingStyle(char* ps)
	{
		strcpy(this->paintingStyle ,ps);
	}

	char* getpaintingStyle()
	{
		return this->paintingStyle ;
	}
	
	void hang()
	{
		cout<< "brackets/hooks are used to hang ";
	}
	painting():  wallAccessories()
	{
		cout<<"\n\npainting Style default constructor called";	
		strcpy(this->artist,"not given");
		strcpy(this->paintingStyle,"not given");
	}
	
	painting(double p, char*m, char* c, int s,char* a,char* ps): wallAccessories(p,m,c,s)
	{
		cout<<"\n\n painting Style parameterized contructor called";
		strcpy(this->artist,a);
		strcpy(this->paintingStyle,ps);
	}
	
	void display()
	{
		wallAccessories::display() ;
		cout<<"\nartist of painting : "<< artist;
		cout<<"\n painting style: "<< paintingStyle;	
	}
};

struct mirror : public wallAccessories
{
	char reflectType[20];
	char shape[20];
	
	
	void setReflectType(char* rt)
	{
		strcpy(this->reflectType,rt);
	}
	char* getReflectType()
	{
		return this->reflectType;
	}
	
	void setShape(char* sh)
	{
		strcpy(this->shape,sh);
	}
	char* getShape()
	{
		return this->shape;
	}
	
	void hang()
	{
		cout<< "brackets/hooks are used to hang ";
	}
	void display()
	{
		wallAccessories::display() ;
		cout<<"\n \n mirror reflect type:"<<reflectType;
	}
	mirror()
	{
		cout<<"\n\nmirror default constructor called";
		
		strcpy(this->reflectType,"not given");
		strcpy(this->shape,"not given");
		
	}
	mirror(double p, char* m, char* c,int s ,char* rt,char* sh): wallAccessories(p,m,c,s)
	{
		cout<<"\n\n mirror parameterized contructor called";
		strcpy(this->reflectType,rt);
		strcpy(this->shape,sh);
	}
	

};

class watch : public wallAccessories
{
	char wtype[20];
	
	public:
	void setwtype(char* wt)
	{
		strcpy(this->wtype,wt);
	}
	char* getwtype()
	{
		return this->wtype;
	}
	
	void display()
	{
		wallAccessories::display() ;
		cout<<"\n \n watch type (analog/digital):"<<wtype;
	}
	
	void hang()
	{
		cout<< "nails are used to hang ";
	}
	
	watch()
	{
		cout<<"\n\n watch default constructor called";
		
		strcpy(this->wtype,"not given");
		
	}
	watch(double p, char* m, char* c,int s ,char* wt): wallAccessories(p,m,c,s)
	{
		cout<<"\n\n watch parameterized contructor called";
		strcpy(this->wtype,wt);
	}
	

};

int main()
{
	wallAccessories *wap;
	wallAccessories wa1;
	wap=&wa1;
	wap->hang();
	wap->display();
	cout << "\n-----**---\n";
	//m1.display();
	
	painting *pp;
	painting p1(2000,"paper","blue",20,"abc","free");
	pp=&p1;
	pp->hang();
	pp->display();
		cout << "\n-----**---\n";
//	wm1.display();
	mirror  *mp;
	mirror m1(2000,"paper","blue",20,"abcdd","circle");
	mp=&m1;
	mp->hang();
	mp->display();
		cout << "\n-----**---\n";
//	f1.display();
	watch   *wp;
	watch w1(2000,"paper","blue",20,"analog");
	wp=&w1;
	wp->hang();
	wp->display();
		cout << "\n-----**---\n";
}

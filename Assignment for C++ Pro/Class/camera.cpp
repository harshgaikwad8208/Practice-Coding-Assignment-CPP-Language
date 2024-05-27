#include<stdio.h>
#include<string.h>
struct camera
{
    int id;
    char name[50];
    double price;
    char company[50];
    double model;

    void setid(int a)
    {
        this->id=a;
    }
    int getid()
    {
        return this->id;
        printf("ID = %lf\n",id);
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    char* getname()
    {
        return this->name;
        printf("Name = %s\n",name);
    }
    void setprice(int s)
    {
        this->price=s;
    }
    double getprice()
    {
        return this->price;
        printf("Price = %lf\n",price);
    }
    void setcompany(char* cmp)
    {
        strcpy(this->company,cmp);
    }
    char* getcompany()
    {
        return this->company;
        printf("Company = %s\n",company);
    }
    
    void display()
    {
        printf("id = %lf name = %s company = %s price = %lf",id,name,company,price);
    }
};

int main() 
{
    camera s1;
    s1.setid(89);
    s1.getid();
    s1.setname("ZR");
    s1.getname();
    s1.setprice(50000);
    s1.getprice();
    s1.setcompany("Sony");
    s1.getcompany();
    
    s1.display();

    
}

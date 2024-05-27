#include<stdio.h>
#include<string.h>
struct product
{
    double id;
    char name[50];
    double quantity;
    double price;

    void setid(int a)
    {
        this->id=a;
    }
    double getid()
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
    void setquantity(int b)
    {
        this->quantity=b;
    }
    double getquantity()
    {
        return this->quantity;
        printf("Quantity = %lf\n",quantity);
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
    void display()
    {
        printf("id = %lf name = %s Quantity = %lf Price = %lf",id,name,quantity,price);
    }
};
int main()
{
    product s1,s2;
    s1.setid(89);
    s1.getid();
    s1.setname("Earbud");
    s1.getname();
    s1.setquantity(5);
    s1.getquantity();
    s1.setprice(2000);
    s1.getprice();
    s1.display();
}
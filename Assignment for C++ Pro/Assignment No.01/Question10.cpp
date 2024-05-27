#include<iostream>
#include<string.h>
using namespace std;
struct Product
{
    int id;
    char name[50];
    int quantity;
    int price;

    Product()
    {
        this->id=0;
        strcpy(this->name,"Not Given");
        this->quantity=0;
        this->price=0;
    }
    Product(int id,char* name,int quantity,int price)
    {
        this->id=id;
        strcpy(this->name,name);
        this->quantity=quantity;
        this->price=price;
    }
    void setID(int id)
    {
        this->id;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setQuantity(int quantity)
    {
        this->quantity;
    }
    void setPrice(int price)
    {
        this->price;
    }
    int getId()
    {
        return this->id;
    }
    char* getName()
    {
        return this->name;
    }
    int getQuantity()
    {
        return this->quantity;
    }
    int getPrice()
    {
        return this->price;
    }
    void display()
    {
        cout<<"Id: "<<getId()<<"\n"<<"Name: "<<getName()<<"\n"<<"Quantity: "<<getQuantity()<<"\n"<<"Price: "<<getPrice();
    }
};
int main()
{
    Product p1(89,"Book",5,50);
    p1.display();
}
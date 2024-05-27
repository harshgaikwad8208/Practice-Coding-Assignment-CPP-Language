
#include <stdio.h>
#include<string.h>
struct Book 
{
    int id;
    char name[100];
    char author[100];
    double price;

    void setid(int a)
    {
        this->id=a;
    }
    int getid()
    {
        return this->id;
        //printf("ID = %lf\n",id);
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    char* getname()
    {
        return this->name;
        //printf("Name = %s\n",name);
    }
    void setauthor(char* cmp)
    {
        strcpy(this->author,cmp);
    }
    char* getauthor()
    {
        return this->author;
        //printf("Author = %s\n",author);
    }
    void setprice(int s)
    {
        this->price=s;
    }
    double getprice()
    {
        return this->price;
        //printf("Price = %lf\n",price);
    }
    void display()
    {
        printf("In display\n");
        printf("id = %d name = %s author = %s price = %lf\n",id,name,author,price);
    }
};

int main() 
{
    Book s1;
    double p=50000;
    int i = 89;
    s1.setid(i);
    
    s1.setname("Harsh");
    
    s1.setauthor("Google");
    
    s1.setprice(p);
    
    s1.display();
    printf("In get\n");
    printf("Id = %d Name = %s Author = %s price = %d ",s1.getid(),s1.getname(),s1.getauthor(),s1.getprice());
    
}

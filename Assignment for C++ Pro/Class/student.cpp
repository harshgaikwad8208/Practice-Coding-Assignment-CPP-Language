#include<stdio.h>
#include<string.h>
struct student
{
    int roll;
    char name[20];

    void setroll(int a)
    {
        this->roll=a;
    }
    int getroll()
    {
        return this->roll;
        //printf("roll no: %d\n",roll);
    }
    void setname(char* nm)
    {
        strcpy(this->name,nm);
    }
    char* getname()
    {
        return this->name;
        //printf("Name is :%s\n",name);
    }
    void display()
    {
        printf("%s roll no is %d.\n",name,roll);
    }

};
int main()
{
    student s1,s2;
    s1.setroll(10);
    s1.getroll();
    s1.setname("Sachin");
    s1.getname();
    s1.display();

    s2.setroll(07);
    s2.getroll();
    s2.setname("Dhoni");
    s2.getname();
    s2.display();

    printf("By getter\n");
    printf("%d and %s name",s1.getroll,s1.getname);
    
}
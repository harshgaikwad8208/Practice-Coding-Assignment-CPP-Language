//Student (rollNo, name, marks)
#include<iostream>
#include<string.h>
using namespace std;
struct student
{
    int roll;
    char name[20];
    int marks;

    student()
    {
        this->roll=0;
        strcpy(this->name,"NOT GIVEN");
        this->marks=0;
    }

    student(int roll,char* name,int marks)
    {
        this->roll=roll;
        strcpy(this->name,name);
        this->marks=marks;
    }

    void setRoll(int roll)
    {
        this->roll=roll;
    }
    void setName(char* name)
    {
        strcpy(this->name,name);
    }
    void setMarks(int marks)
    {
        this->marks=marks;
    }
    int getRoll()
    {
        return this->roll;
    }
    char* getName()
    {
        return this->name;
    }
    int getMarks()
    {
        return this->marks;
    }
    void display()
    {
        cout<<"Roll No: "<<getRoll()<<endl<<"Name: "<<getName()<<endl<<"Marks: "<<getMarks();
    }

};
int main()
{
    student s1(89,"Harsh",85);
    s1.display();
    
}
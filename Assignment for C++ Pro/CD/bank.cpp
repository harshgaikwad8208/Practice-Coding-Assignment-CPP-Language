#include<stdio.h>
#include<string.h>
struct Student
{
 int roll;
 char name[20];
 int percentage;
 
 Student()
 {
  this -> roll = 0;
  strcpy(this -> name,"not given"); 
  this -> percentage = 0;
 }
 Student(int roll,char* name)
 {
  this -> roll = roll;
  strcpy(this -> name,name);
  this -> percentage = percentage; 
 }
 void setPercentage(int percentage)
 {
  this -> percentage = percentage;
 }
 void setName(char* name)
 {
  strcpy(this -> name,name);
 }
 int getPercentage()
 {
  return this -> percentage;
 }
 char* getName()
 {
  return this -> name;
 }
 
};
struct Employee
{
 int id;
 int salary;
 
 void setID(int id)
 {
  this -> id = id;
 }

 int getID()
 {
  return this -> id;
 }
 
 void setSalary(int salary)
 {
  this -> salary = salary;
 }

 int getSalary()
 {
  return this -> salary;
 }
};
struct Bank
{
 int amount;
 int loan;
 int distributeloan(Student s1)
 {

  if(s1.getPercentage() > 80)
  {
   return loan = 200000;
  }
  else if(s1.getPercentage() > 90)
  {
   return loan = 350000;
  }
  else
  {
   printf("NOT ELIGIBLE FOR LOAN");
  }
 }
 
 int distributeloan(Employee e1)
 {
  if(e1.getSalary() > 50000)
  {
   return loan = 200500;
  }
  else if(e1.getSalary() > 90000)
  {
   return loan = 450000;
  }
  else
  {
   printf("NOT ELIGIBLE FOR LOAN");
  }
 }
};

int main()
{
 Student s1;
 Employee e1;
 Bank b1;
 s1.setPercentage(86);
 e1.setSalary(97000);
 int r = b1.distributeloan(s1);
 int r1 = b1.distributeloan(e1);
 printf("The Loan Amount Sanctioned for Student is : %d \n",r);
  printf("The Loan Amount Sanctioned for Employee is : %d ",r1);
}
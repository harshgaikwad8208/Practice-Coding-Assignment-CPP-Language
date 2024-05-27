#include<iostream>
using namespace std;
int main()
{
    int i,no,sum=0;
    cout<< "Enter the value of i :";
    cin>> i;
    cout<< "Enter the value of no : ";
    cin>> no;
    for(i;i<=no;i++)
    {
        sum = sum + i;
    }
    cin>> sum;
}
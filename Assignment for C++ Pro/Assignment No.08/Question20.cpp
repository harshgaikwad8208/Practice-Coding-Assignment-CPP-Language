#include<iostream>
using namespace std;
int main()
{
    int original,rev = 0,rem;
    int no=original;
    cout<<"Enter number : ";
    cin>>original;
    while(no!=0)
    {
        int rem=no%10;
        rev=rev*10+rem;
        no=no/10;
    }
    if(original==rev)
    {
        cout<<original<<" number is palindrome.";
    }
    else
    {
        cout<<original<<" number is not palindrome.";
    }
}
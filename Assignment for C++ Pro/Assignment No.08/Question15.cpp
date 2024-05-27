#include<iostream>
using namespace std;
int main()
{
    int no,m=0,flag=0,i;
    cout<< "Enter the prime number : ";
    cin >> no;
    m = no/2;
    for(i=2;i<=m;i++)
    {
        if(no%i==0)
        {
            cout<<"Number is not prime";
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<< "Number is prime";
    }
    return 0;
}
#include<iostream>
using namespace std;
int main()
{
    int i,no,sum = 0,m;
    cout<<"Enter number : ";
    cin>>no;
    m=no/2;
    for(i = 1; i<=m; i++)
    {
        if(no%i==0)
        {
            sum=sum+i;
        }
    }
    if(sum==no)
    {
        cout<<no<<" is a perfect no.";
    }
    else
    {
        cout<<no<<"is not a perfect no";
    }
}
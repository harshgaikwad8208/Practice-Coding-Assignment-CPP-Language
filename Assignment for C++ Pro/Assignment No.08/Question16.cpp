#include<iostream>
using namespace std;
int main()
{
    int no,rem,sum = 0,temp;
    cout<<"Enter number: ";
    cin>> no;
    temp = no;
    while(no>0)
    {
        rem = no%10;
        sum = sum+(rem*rem*rem);
        no = no/10;
    }
    if(temp==sum)
    {
        cout<<"It is an armstrong number";
    }
    else
    {
        cout<<"Its not an armstrong number";
    }
    return 0;
}
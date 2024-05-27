// Check if the given number is even or odd.

#include<iostream>
using namespace std;
int main()
{
    int no;
    cout << "Enter the number:\n";
    cin>> no;
    if (no%2==0)
    {
        cout<< "The number is Even "<<no<<"\n";
    }
    else
    {
        cout<< "The number is Odd "<<no<<"\n";
    }
    
}
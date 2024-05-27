#include<iostream>
using namespace std;
int main()
{
    int No;
    int i=1;
    cout<< "Enter the number";
    cin>> No;
    while(i<=10)
    {
        //cout<< No <<"X" <<i <<"=" <<No*i;
        cout << No << " x " << i << " = " << No * i << endl;
        i++;
    }
}
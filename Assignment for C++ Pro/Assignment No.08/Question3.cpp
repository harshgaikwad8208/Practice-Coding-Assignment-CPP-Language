// Accept a 3 digit number from user and find the sum of the digits and also reverse the number.
/*
#include<stdio.h>

int main()
{
    int no;
    printf("Enter the number :\n");
    scanf("%d",&no);

    int r,sum = 0,rev,r1,r2,r3,r4,r5;
    r = no%10;
     no= no/10;
    r1 = no%10;
    no = no/10;
    r2 = no%10;
    no = no/10;
    r3 = no%10;
    no = no/10;
    r4 = no%10;
    no = no/10;
    r5 = no%10;
    no = no/10;

    sum = r+r1+r2+r3+r4+r5;
    printf("%d\n",sum);
    rev = r*100000+r1*10000+r2*1000+r3*100+r4*10+r5;
    printf("%d\n",rev);

    return 0;

}
*/

#include<iostream>
using namespace std;

int main()
{
    int no;
    cout<< "Enter the number:\n";
    cin>> no;
    int rem;
    int rev = 0;
    int sum=0;

    while (no>0)
    {
        rem = no%10;
        sum = sum+rem;
        rev = rev*10+rem;
        no = no/10;
       
    }

     cout<< "sum is "<<sum<<"\n";
     cout<< "rev is "<<rev;
    
}


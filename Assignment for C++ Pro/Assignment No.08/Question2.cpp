// Finding area and perimeter of rectangle or circle.

#include<iostream>
using namespace std;
int main()
{
    int length;
    cout<< "Enter the length: \n";
    cin>>length;

    int breadth;
    cout<< "Enter the breadth: \n";
    cin>> breadth;

    int area = length * breadth;
    cout<< "The area is rectangle is : \n"<< area;

    int perimeter = 2 * (length + breadth);
    cout<< "The perimeter is rectangle is : "<<perimeter;

    return 0;
}
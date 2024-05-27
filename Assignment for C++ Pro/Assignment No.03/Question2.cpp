// Write a operator overloading code to overload all the arithmetic operators to
//  add 2 distances, 1 distance and int value and one non member function to add int and distance.

#include <iostream>

using namespace std;

class Distance {
private:
    int feet;
    float inches;

public:
    Distance() : feet(0), inches(0.0) {}

    Distance(int ft, float in) : feet(ft), inches(in) {}

    Distance operator+( Distance& other)  {
        Distance result;
        result.feet = feet + other.feet;
        result.inches = inches + other.inches;
        if (result.inches >= 12.0) {
            result.inches -= 12.0;
            result.feet++;
        }
        return result;
    }

    Distance operator+(int value)  {
        Distance result;
        result.feet = feet;
        result.inches = inches + value;
        if (result.inches >= 12.0) {
            result.inches -= 12.0;
            result.feet++;
        }
        return result;
    }

    int getFeet()  {
        return feet;
    }

    float getInches()  {
        return inches;
    }
};

Distance operator+(int value,  Distance& distance) {
    return distance + value;
}

int main() {
    Distance d1(3, 9.0);
    Distance d2(2, 6.5);

    Distance sum1 = d1 + d2;
    cout << "Sum of distances: " << sum1.getFeet() << " feet and " << sum1.getInches() << " inches\n";

    Distance sum2 = d1 + 5;
    cout << "Sum of distance and integer: " << sum2.getFeet() << " feet and " << sum2.getInches() << " inches\n";

    Distance sum3 = 10 + d2;
    cout << "Sum of integer and distance: " << sum3.getFeet() << " feet and " << sum3.getInches() << " inches\n";

    return 0;
}

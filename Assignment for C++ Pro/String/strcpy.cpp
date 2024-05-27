#include <iostream>
#include <vector>
using namespace std;
class Vehicle 
{
protected:
    int basicToll;
    int extraCharges;

public:
    Vehicle(int basicToll) : basicToll(basicToll), extraCharges(0) {}

    virtual void calculateExtraCharges(int numPersons) = 0;

    int calculateTotalToll() 
    {
        return basicToll + extraCharges;k
    }
}; 

class TwoWheeler : public Vehicle 
{
public:
    TwoWheeler() : Vehicle(20) {}

    void calculateExtraCharges(int numPersons) override 
    {
        if (numPersons > 2) 
        {
            extraCharges = 10 * (numPersons - 2);
        }
    }
};

class ThreeWheeler : public Vehicle 
{
public:
    ThreeWheeler() : Vehicle(30) {}

    void calculateExtraCharges(int numPersons) override 
    {
        if (numPersons > 3) {
            extraCharges = 20 * (numPersons - 3);
        }
    }
};

class FourWheeler : public Vehicle 
{
public:
    FourWheeler() : Vehicle(40) {}

    void calculateExtraCharges(int numPersons) override 
    {
        if (numPersons > 4) 
        {
            extraCharges = 40 * (numPersons - 4);
        }
    }
};

class HeavyVehicle : public Vehicle 
{
public:
    HeavyVehicle() : Vehicle(60) {}

    void calculateExtraCharges(int numPersons) override 
    {
        if (numPersons > 6) 
        {
            extraCharges = 100 * (numPersons - 6);
        }
    }
};

int main() 
{
    //std::vector<Vehicle*> vehicles;

    char choice;
    do 
    {
        cout << "Choose vehicle type: \n"
                  << "1. Two Wheeler\n"
                  << "2. Three Wheeler\n"
                  << "3. Four Wheeler\n"
                  << "4. Heavy Vehicle\n"
                  << "5. Exit\n"
                  << "Enter your choice: ";
        cin >> choice;

        if (choice == '5') 
        {
            break;
        }

        int numPersons;
        cout << "Enter the number of persons in the vehicle: ";
        cin >> numPersons;

        Vehicle* vehicle = nullptr;

        switch (choice) 
        {
            case '1':
                vehicle = new TwoWheeler();
                break;
            case '2':
                vehicle = new ThreeWheeler();
                break;
            case '3':
                vehicle = new FourWheeler();
                break;
            case '4':
                vehicle = new HeavyVehicle();
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
                continue;
        }

        vehicle->calculateExtraCharges(numPersons);
        std::cout << "Total toll: Rs. " << vehicle->calculateTotalToll() << "\n";

        delete vehicle;

    } while (true);

    std::cout << "Exiting program.\n";

    return 0;
}

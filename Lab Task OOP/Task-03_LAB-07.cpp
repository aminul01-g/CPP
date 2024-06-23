#include <bits/stdc++.h>
using namespace std;
class Vehicle
{
private:
    string brand;
    string model;

public:
    Vehicle()
    {
        brand = " ";
        model = " ";
    }
    Vehicle(string brand, string model)
    {
        this->brand = brand;
        this->model = model;
    }
    void DisplayVehicle()
    {
        cout << brand << " " << model;
    }
};
class ElectricDevice
{
private:
    int voltage;
    int powerConsumption;

public:
    ElectricDevice()
    {
        voltage = 0;
        powerConsumption = 0;
    }
    ElectricDevice(int voltage, int powerConsumption)
    {
        this->voltage = voltage;
        this->powerConsumption = powerConsumption;
    }
    void DisplayElectricDevice()
    {
        cout << voltage << " " << powerConsumption << endl;
    }
};
class ElectricCar : public Vehicle, public ElectricDevice
{
public:
    ElectricCar(string brand, string model, int voltage, int powerConsumption) : Vehicle(brand, model), ElectricDevice(voltage, powerConsumption)
    {
    }
    void DisplayDetails()
    {
        DisplayVehicle();
        DisplayElectricDevice();
    }
};
int main()
{
    ElectricCar car("BMW", "Model A91", 400, 600);
    car.DisplayDetails();
    return 0;
}

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    int year;
    double speed;

    Car(string brand, int year, int speed) : brand(brand), year(year), speed(speed){};

    void neededTime(){
        double distance = 100;
        double time = distance / speed;
        cout << "Travel duration : " << time << " hour" << endl;
    }
};

int main(int argc, char const *argv[])
{
    Car supra("Toyota", 2022, 60);
    supra.neededTime();

    return 0;
}
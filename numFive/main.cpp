#include <iostream>
using namespace std;

class Employee
{
public:
    string name;
    int hourlyRate;
    int hoursWorked;

    Employee(string name, int hourlyRate, int hoursWorked) : name(name), hourlyRate(hourlyRate), hoursWorked(hoursWorked){};

    int totalSalary()
    {
        return hourlyRate *= hoursWorked;
    }
};

int main(int argc, char const *argv[])
{
    Employee budi("Budi", 200000, 5);
    int salary = budi.totalSalary();
    cout << "Total : " << salary << endl;

    return 0;
}
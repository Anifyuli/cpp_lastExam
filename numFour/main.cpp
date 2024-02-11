#include <iostream>
using namespace std;

class BankAccount
{
public:
    string name;
    int balance;

    BankAccount(string name, int balance) : name(name), balance(balance){};

    int deposit(int depositValue)
    {
        return balance += depositValue;
    }

    int withdraw(int withdrawValue)
    {
        return balance -= withdrawValue;
    }

    void balanceInfo()
    {
        cout
            << "Name : " << name << endl
            << "Balance : IDR " << balance << endl;
    }
};

int main(int argc, char const *argv[])
{
    BankAccount anita("Anita Triasih", 2000000);
    anita.deposit(1000000);
    anita.balanceInfo();

    anita.withdraw(500000);
    anita.balanceInfo();
    return 0;
}
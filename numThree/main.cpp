#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    double score;

    Student(string name, int age, double score) : name(name), age(age), score(score){};

    void studentInfo(){
        cout 
        << "Name : " << name << endl
        << "Age : " << age << " years old" << endl
        << "Score : " << score << endl;
    }
};

int main(int argc, char const *argv[])
{
    Student budi("Budi", 16, 7.5);
    budi.studentInfo();

    return 0;
}
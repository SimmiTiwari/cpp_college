#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    Student s1;

    s1.name = "Simmi";
    s1.age = 21;
    s1.course = "B.Tech CSE";

    s1.display();

    return 0;
}
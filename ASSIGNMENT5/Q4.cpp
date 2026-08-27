#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;

    // Constructor
    Student(string name, int age, string course) {
        this->name = name;
        this->age = age;
        this->course = course;
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Course: " << course << endl;
    }
};

int main() {
    // Object initialized using constructor
    Student s1("Simmi", 21, "B.Tech CSE");

    s1.display();

    return 0;
}
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;
    string course;
};

int main() {
    Student s1;

    s1.name = "Simmi";
    s1.age = 21;
    s1.course = "B.Tech CSE";

    cout << "Name: " << s1.name << endl;
    cout << "Age: " << s1.age << endl;
    cout << "Course: " << s1.course << endl;

    return 0;
}
//23070123014 Akshit Mathur
//Aim:Implemention of Constructors to Define Constructor Outside Class
#include <iostream>
using namespace std;

class Student {
    int rno;
    char name[50];
    double fee;
public:
    Student();
    void display();
};

Student::Student() {
    cout << "Enter the roll number: ";
    cin >> rno;
    cout << "Enter the name: ";
    cin >> name;
    cout << "Enter the fee: ";
    cin >> fee;
}

void Student::display() {
    cout << endl << rno << "\t" << name << "\t" << fee << endl;
}

int main() {
    Student s;
    s.display();
    return 0;
}
//Output
/*Enter the roll number: 014
Enter the name: Akshit
Enter the fee: 1000000

14      Akshit  1e+006*/

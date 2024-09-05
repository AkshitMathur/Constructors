//23070123014 Akshit Mathur
//Aim:Implemention of Constructors to perform using Parameterized Constructors.
#include <iostream>
using namespace std;

class Construct {
    int a;
    int b;
public:
    Construct(int m , int n) {
        a = m;
        b = n;
    }
    void display() {
        cout << "a ="<< a <<endl<< "b ="<<b;
    }
};

int main() {
    Construct myconstruct(10,20);
    myconstruct.display();

    return 0;
}
//Output
/*a = 10
b = 20
*/


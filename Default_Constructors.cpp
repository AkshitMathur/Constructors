//23070123014 Akshit Mathur
//Aim:Implemention of Constructors to perform using Default Constructors.
#include <iostream>
using namespace std;

class Construct {
    int a;
    int b;
public:
    Construct() {
        a = 10;
        b = 20;
    }
    void display() {
        cout << "Addition result is: " << a + b << endl;
        cout << "Multiplication result is: " << a * b << endl;
    }
};

int main() {
    Construct myconstruct;
    myconstruct.display();

    return 0;
}
//Output
/*Addition result is: 30
Multiplication result is: 200
*/    

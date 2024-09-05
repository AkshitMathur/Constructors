//23070123014 Akshit Mathur
//Aim:Implemention of Constructors to perform using Copy Constructor.
#include <iostream>
using namespace std;

class Wall {
    double length;
    double height;
    
public:
    
    Wall(double len, double hgt) {
        length = len;
        height = hgt;
    }
    
  
    Wall(const Wall&obj) {
        length = obj.length;
        height = obj.height;
    }
    
    
    double calculateArea() const {
        return length * height;
    }
};

int main() {
    Wall wall1(10.5, 8.6); 
    Wall wall2 = wall1;    

    cout << "Area of wall 1: " << wall1.calculateArea() << endl;
    cout << "Area of wall 2: " << wall2.calculateArea() << endl;    

    return 0;
}
//Output
/*Area of wall 1: 90.3
Area of wall 2: 90.3
*/

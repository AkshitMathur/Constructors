//23070123014 Akshit Mathur
//Aim:Implementation of Deconstructor and count the number of objects.
#include <iostream>
using namespace std;
int count=0;
class Student{
    public:
    Student()
    {
        count++;
        cout<<"number of objects created:"<<count<<endl;
    }
    ~Student()
    {
        count--;
        cout<<"no.of objects destroyed:"<<count<<endl;
    }
};
int main(){
    Student aa,bb,cc;
    {
        Student dd;
    }

    return 0;
}
//Output
/*number of objects created:1
number of objects created:2
number of objects created:3
number of objects created:4
no.of objects destroyed:3
no.of objects destroyed:2
no.of objects destroyed:1
no.of objects destroyed:0
*/

// NAME: Alok Chawat
// PRN: 23070123016
// Exp-14-Inheritance
//Multiple Inheritance

#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string company = "Mercedes";
    void type() {
        cout << "G-Wagon" << endl;
    }
};

class Specs {
public:
    string mileage = "8 kmpl";
    void colour() {
        cout << "Black" << endl;
    }
};


class Car : public Vehicle, public Specs {
public:
    string seater = "4 seater";
};

int main() {
    
    Car f2;
    f2.colour();
    cout << f2.company << " ";
    f2.type();
    cout << "(" << f2.seater << ")" << endl << "MILEAGE: " << f2.mileage << endl;
    return 0;
}

/*Output:-
Black
Mercedes G-Wagon
(4 seater)
MILEAGE: 8 kmpl
*/
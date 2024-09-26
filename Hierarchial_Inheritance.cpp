// NAME: Alok Chawat
// PRN: 23070123016
// Exp-14 Inheritance
// Hierarchical Inheritance

#include <iostream>
#include <string>
using namespace std;

class Cars {
public:
    string type[3] = {"Sedan", "SUV", "Hatchback"};
    void brand() {
        cout << "General Motors" << endl;
    }
};

class Sedan : public Cars {
public:
    string name = "Impala";
};

class SUV : public Cars {
public:
    string name = "Escalade";
};

class Hatchback : public Cars {
public:
    string name = "Aveo";
};

int main() {
    Sedan j1;
    cout << endl;
    j1.brand();
    cout << j1.type[0] << ": " << j1.name << endl;

    SUV j2;
    cout << endl;
    j2.brand();
    cout << j2.type[1] << ": " << j2.name << endl;

    Hatchback j3;
    cout << endl;
    j3.brand();
    cout << j3.type[2] << ": " << j3.name << endl;

    return 0;
}
/*Output:-
General Motors
Sedan: Impala
General Motors
SUV: Escalade
General Motors
Hatchback: Aveo
*/
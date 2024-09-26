// NAME: Alok Chawat
// PRN: 23070123016
// Exp-14-Inheritance
//Multilevel Inheritance

#include <iostream>
#include <string>
using namespace std;

class Food {
public:
    string cuisine = "Indian";
    void type() {
        cout << "Asian" << endl;
    }
};

class Dish : public Food {
public:
    string dish = "Biryani";
};

class Restaurant : public Dish {
public:
    string name = "Zeeshan";
};

int main() {
    Restaurant f3;
    f3.type();
    cout << f3.cuisine << ": " << f3.dish << endl;
    cout << "Restaurant: " << f3.name << endl;
    return 0;
}
/*Output:-
Asian
Indian: Biryani
Restaurant: Zeeshan
*/
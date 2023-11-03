#include "header.h"

int main() {

    Car myCar("12345", "Pink", "Ford", 2020);
    Motorcycle myMotorcycle("ABCDE", "Red", "Harely", 2019);
    Boat myBoat("1A2B3C", "White", "Yamaha", 1962);
    Plane myPlane("A2B3C4", "Blue", "Boeing", 2003);

    cout << myCar;

    myBoat.toggleEngine();
    myBoat.moveForwards();
    cout << myBoat;

    myPlane.moveBackwards();

    myMotorcycle.moveBackwards();
    cout << myMotorcycle;

    Car copyCar("12345", "Pink", "Ford", 2020);
    if (myCar == copyCar) {
        cout << "The two cars are the same." << endl;
    }
    if (myBoat != myPlane) {
        cout << "The boat and the plane are not the same." << endl;
    }
    
    return 0;
}
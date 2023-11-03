#include "header.h"

Vehicle::Vehicle(const string v, string c, const string m, const int y, const string t) {
    vstate = Off;
    type = t;
    vinnum = v;
    color = c;
    manufacturer = m;
    year = y;
}

void Vehicle::setColor(string c) {
    color = c;
}

void Vehicle::toggleEngine() {
    if( vstate == Off ) {
        setState(Neutral);
        cout << "The engine turns on" << endl;
    }
    else {
        setState(Off);
        cout << "The engine shuts off" << endl;
    }
}

void Vehicle::moveBackwards() {
    cout << "This vehicle cannot move backwards." << endl;
}

ostream& operator<<(ostream& os, const Vehicle& vehicle) {
    os  << "____________________" << endl 
        << vehicle.color << " " << vehicle.type << endl << endl
        << "Vin Number: " << vehicle.vinnum << endl
        << "Manufacturer: " << vehicle.manufacturer << endl
        << "State: ";

        switch(vehicle.vstate) {
            case Off: os << "Off"; break;
            case Neutral: os << "Neutral/Idle"; break;
            case GoingForward: os << "Currently moving forwards"; break;
            case GoingBackward: os << "Currently moving backwards"; break;
        }

    os  << endl
        << "Year: " << vehicle.year << endl
        << "____________________" << endl;
    return os;
}

bool Vehicle::operator==(const Vehicle& other) const {
    return  vinnum == other.vinnum &&
            color == other.color &&
            manufacturer == other.manufacturer &&
            year == other.year &&
            type == other.type;
}

bool Vehicle::operator!=(const Vehicle& other) const {
    return !(*this == other);
}

void Vehicle::setState(state s) {
    vstate = s;
}

state Vehicle::getState() {
    return vstate;
}
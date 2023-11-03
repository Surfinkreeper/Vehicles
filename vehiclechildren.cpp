#include "header.h"

Car::Car(const string v, string c, const string m, const int y, const string t) : Vehicle(v,c,m,y,t) {}

void Car::moveForwards() {
     if( getState() == Off ) {
        cout << "The engine is off." << endl;
    }
    else {
        setState(GoingForward);
        cout << "The car beins moving forwards." << endl;
    }
}

void Car::moveBackwards() {
     if( getState() == Off ) {
        cout << "The engine is off." << endl;
    }
    else {
        setState(GoingBackward);
        cout << "The car begins moving backwards." << endl;
    }
}

Motorcycle::Motorcycle(const string v, string c, const string m, const int y, const string t) : Vehicle(v,c,m,y,t) {}

void Motorcycle::moveForwards() {
     if( getState() == Off ) {
        cout << "The engine is off." << endl;
    }
    else {
        setState(GoingForward);
        cout << "The motorcycle revs its engine and begins to move forwards." << endl;
    }
}

void Motorcycle::moveBackwards() {
     if( getState() == Off ) {
        cout << "The engine is off." << endl;
    }
    else {
        setState(GoingBackward);
        cout << "The motorcycle begins moving backwards." << endl;
    }
}

Boat::Boat(const string v, string c, const string m, const int y, const string t) : Vehicle(v,c,m,y,t) {}

void Boat::moveForwards() {
     if( getState() == Off ) {
        cout << "The engine is off." << endl;
    }
    else {
        setState(GoingForward);
        cout << "The boat tears up the water and begins to move forwards." << endl;
    }
}

Plane::Plane(const string v, string c, const string m, const int y, const string t) : Vehicle(v,c,m,y,t) {}

void Plane::moveForwards() {
     if( getState() == Off ) {
        cout << "The engine is off." << endl;
    }
    else {
        setState(GoingForward);
        cout << "The plane rotates its wings begins to move forwards." << endl;
    }
}
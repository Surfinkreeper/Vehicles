#ifndef HEADER_H_
#define HEADER_H_

#include<iostream>
#include<string>
using namespace std;

enum state {
    Off,
    Neutral,
    GoingForward,
    GoingBackward,
};

class Vehicle {
    public:
        Vehicle(const string v = "0", string c = "Black", const string m = "MANUFACTURER", const int y = 0, const string t = "Vehicle");
        ~Vehicle() {}

        void setColor(string c);
        void toggleEngine();
        virtual void moveForwards() = 0;
        virtual void moveBackwards();

        friend ostream& operator<<(ostream& os, const Vehicle& vehicle);
        bool operator==(const Vehicle& other) const;
        bool operator!=(const Vehicle& other) const;

    protected:
        void setState(state s);
        state getState();

    private:
        state vstate;
        string type;
        string vinnum;
        string color;
        string manufacturer;
        int year;

};

class Car : public Vehicle {
    public:
        Car(const string v = "0", string c = "Black", const string m = "MANUFACTURER", const int y = 0000, const string t = "Car");

        void moveForwards() override;
        void moveBackwards() override;
};

class Motorcycle : public Vehicle {
    public:
        Motorcycle(const string v = "0", string c = "Black", const string m = "MANUFACTURER", const int y = 0000, const string t = "Motorcycle");

        void moveForwards() override;
        void moveBackwards() override;
};

class Boat : public Vehicle {
    public:
        Boat(const string v = "0", string c = "Black", const string m = "MANUFACTURER", const int y = 0000, const string t = "Boat");

        void moveForwards() override;
};

class Plane : public Vehicle {
    public:
        Plane(const string v = "0", string c = "Black", const string m = "MANUFACTURER", const int y = 0000, const string t = "Plane");

        void moveForwards() override;
};

#endif
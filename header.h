#ifndef HEADER_H_
#define HEADER_H_

#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    public:
        Vehicle();
        Vehicle(const string t = "Vehicle", const int v = 0, string c = "Black", const string m = "MANUFACTURER", const int y = 0000);
        ~Vehicle() {}

        void setColor(string c);

        friend ostream& operator<<(ostream& os, const Vehicle* vehicle);
        bool operator==(const Vehicle& other) const;
        bool operator!=(const Vehicle& other) const;

    private:
        const string type;
        const int vinnum;
        string color;
        const string manufacturer;
        const int year;

}

#endif
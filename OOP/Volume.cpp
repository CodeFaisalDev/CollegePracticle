#include <iostream>
#include "bits/stdc++.h" 
using namespace std;

class VOLUME{
    double vol;
    double pi = 2*acos(0.0);

    public:
    
    void volume(double l, double h, double w){
        vol = l * h * w;
        cout << "The volume of the rectangle is: " << vol << endl;
    }

    void volume(double a){
        vol = a * a * a;
        cout << "The volume of the cube is: " << vol << endl;
    }

    void volume(double r, double h){
        vol = pi * r * r * h;
        cout << "The volume of the cylinder is: " << vol << endl;
    }
};

int main(){
    VOLUME vol;
    vol.volume(10, 10, 10);
    vol.volume(10);
    vol.volume(10, 10);

    return 0;
}
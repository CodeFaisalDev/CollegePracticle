#include <iostream>
using namespace std;

class area_cl{
    public:
    double height;
    double width;
};

class rectangle: public area_cl{
    public:
    rectangle(double h, double w){
        height = h;
        width = w;
    }

    double area(){
        return height * width;
    }
};

class isosceles : public area_cl{
    public:
    isosceles(double h, double w){
        height = h;
        width = w;
    }

    double area(){
        return ((height * width) / 2);
    }
};

int main(){
    rectangle r(5, 5);
    isosceles s(5, 5);

    cout << "Area of rectangle: " << r.area() << endl;
    cout << "Area of isosceles: " << s.area() << endl;

    return 0;
}
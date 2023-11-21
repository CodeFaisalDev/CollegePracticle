#include <iostream>
using namespace std;

class Float{
    private:
    float f;

    public:
    Float(float n) : f(n){};

    Float operator+(const Float& other) const{
        return Float(f + other.f);
    }

    Float operator-(const Float& other) const{
        return Float(f - other.f);
    }

    Float operator*(const Float& other) const{
        return Float(f * other.f);
    }

    Float operator/(const Float& other) const{
        
        if (other.f != 0){
            return Float(f / other.f);
        }else{
            cout << "Cannot divide by zero" << endl;
            return Float(0.0f);
        }
        
    }

    void display() const{
        cout << "Value: " << f << endl;
    }

    
};


int main () {
    Float f1(5.5f);
    Float f2(7.5f);

    Float resultAdd = f1 + f2;
    cout << "Addition Result: " << endl;
    resultAdd.display();

    Float resultSub = f1 - f2;
    cout << "Subtraction Result: " << endl;
    resultSub.display();

    Float resultMul = f1 * f2;
    cout << "Multiplication Result: " << endl;
    resultMul.display();

    Float resultDiv = f1 / f2;
    cout << "Division Result: " << endl;
    resultDiv.display();

    return 0;
}
#include <iostream>
using namespace std;

class COMPLEX{
    private:
    int real;
    float imaginary;
    
    public:
    COMPLEX(int x, float y){
        this->real = x;
        this->imaginary = y;
    }

    void show(){
        cout << "Real: " << real << endl;
        cout << "Imaginary: " << imaginary << endl;
    }

    int add(){
        float sum = real + imaginary;
        return sum;
    }
};

int main(){
    COMPLEX *c1 = new COMPLEX(5, 5.5);
    c1->show();
    cout << "Sum of Real and Imaginary: " << c1->add() << endl;
}
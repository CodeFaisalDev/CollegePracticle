#include<iostream>
using namespace std;

class Factorial{
    int n, i, f;
    public:
    Factorial(int n){
        f = 1;
        for(i = 1; i <= n; i++){
            f = f * i;
        }
    }

    void display(){
        cout << "Factorial is: " << f << endl;
    }
};

int main(){
    Factorial fact = Factorial(5);
    fact.display();
    
    return 0;
}
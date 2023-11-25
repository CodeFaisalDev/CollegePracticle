#include <iostream>
using namespace std;

unsigned long long factorial(int n){
    if(n == 0){
        return 1;
    }else{
        return n * factorial(n-1);
    }
}

int main(){
    int n;

    cout << "Enter the number: ";
    cin >> n;

    (n < 0) ? cout << "Enter a valid number: " << endl : 
    cout << "Factorial of " << n << " is: " << factorial(n) << endl;

    return 0;
}
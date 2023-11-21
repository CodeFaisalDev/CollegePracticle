#include <iostream>

using namespace std;

class PRIME{
    int n, i;
    bool is_prime = true;

    public:
    PRIME(int n){
        this->n = n;
    }

    bool prime() {
        if (n == 0 || n == 1){
            is_prime = false;
        }else{
            for (i = 2; i <= n/2; i++){
                if (n%2 == 0){
                    is_prime = false;
                    break;
                }
            }
        }
        return is_prime;
    }
};

int main(){
    PRIME *p1 = new PRIME(5);

    if(p1->prime() == 1){
        cout << "Prime Number" << endl;
    }else{
        cout << "Not Prime Number" << endl;
    }

    delete p1;

    return 0;
}
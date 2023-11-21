#include <iostream>
using namespace std;

class Number{
    private:
    int num;
    public:
    Number(int num) : num(num){}

    int getNum() const {
        return num;
    }
};


class FindNumber{
    public:
    static Number findLargest(const Number& num1, const Number& num2){
        return (num1.getNum() > num2.getNum()) ? num1 : num2;
    }

    static Number findSmallest(const Number& num1, const Number& num2){
        return (num1.getNum() < num2.getNum()) ? num1 : num2;
    }
};


int main(){
    Number n1(15);
    Number n2(5);

    Number largest = FindNumber::findLargest(n1, n2);
    Number smallest = FindNumber::findSmallest(n1, n2);

    cout << "Largest Number: " << largest.getNum() << endl;
    cout << "Smallest Number: " << smallest.getNum() << endl;
}
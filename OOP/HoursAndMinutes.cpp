#include <iostream>

using namespace std;

class Time{
    int hour;
    int minute;

    public:
    Time(int h = 0, int m = 0) : hour(h), minute(m){}

    void inputTime(){
        cout << "Enter hour: ";
        cin >> hour;
        cout << "Enter minute: ";
        cin >> minute;
    }

    Time addTime(const Time& t) const{
        Time result;
        result.minute = minute + t.minute;
        result.hour = hour + t.hour + result.minute / 60;
        result.minute %= 60;
        return result;
    }

    void display() const {
        cout << hour << ":" << minute << endl;
    }
    
};

int main(){
    Time t1, t2, result;

    cout << "Enter the first time: " << endl;
    t1.inputTime();

    cout << "Enter the second time: " << endl;
    t2.inputTime();

    result = t1.addTime(t2);

    cout << "Sum of time: ";
    result.display();

    return 0;
}
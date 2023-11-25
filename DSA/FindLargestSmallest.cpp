#include <bits/stdc++.h>
using namespace std;

int main(){
    const int arr_size = 5;
    int arr[arr_size];

    cout << "Enter the numbers: "<< endl;
    
    for(int i = 0; i < arr_size; i++){
        cin >> arr[i];
    }

    int largest = arr[0];
    int smallest = arr[0];

    for(int i = 1; i < arr_size; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }

    cout << "Largest Number: " << largest << endl;
    cout << "Smallest Number: " << smallest << endl;

    return 0;
}
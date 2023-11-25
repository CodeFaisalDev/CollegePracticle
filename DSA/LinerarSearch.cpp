#include <iostream>
using namespace std;

void LinearSearch(int arr[], int size, int key) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == key) {
            std::cout << "Element found at index " << i << std::endl;
            return;
        }
    }
    cout << "Element not found" << endl;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    cout << "Enter the element to be searched: ";
    cin >> key;

    LinearSearch(arr, size, key);

    return 0;
}

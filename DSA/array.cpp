#include <iostream>

using namespace std;

class ArrayOperations {
private:
    int capacity;
    int* arr;
    int size;

public:
    ArrayOperations(int capacity) : capacity(capacity), size(0) {
        arr = new int[capacity];
    }

    ~ArrayOperations() {
        delete[] arr;
    }

    void display() {
        cout << "Array: ";
        for (int i = 0; i < size; ++i) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void insert_at_end(int value) {
        if (size < capacity) {
            arr[size] = value;
            ++size;
            cout << "Inserted " << value << " at the end." << endl;
        } else {
            cout << "Array is full. Cannot insert." << endl;
        }
    }

    void insert_at_index(int index, int value) {
        if (0 <= index && index <= size && size < capacity) {
            for (int i = size; i > index; --i) {
                arr[i] = arr[i - 1];
            }
            arr[index] = value;
            ++size;
            cout << "Inserted " << value << " at index " << index << "." << endl;
        } else {
            cout << "Invalid index or array is full. Cannot insert." << endl;
        }
    }

    void delete_at_index(int index) {
        if (0 <= index && index < size) {
            int deletedValue = arr[index];
            for (int i = index; i < size - 1; ++i) {
                arr[i] = arr[i + 1];
            }
            --size;
            cout << "Deleted value " << deletedValue << " at index " << index << "." << endl;
        } else {
            cout << "Invalid index. Cannot delete." << endl;
        }
    }
};

int main() {
    ArrayOperations arrOps(5);

    arrOps.insert_at_end(10);
    arrOps.insert_at_end(20);
    arrOps.insert_at_index(1, 15);
    arrOps.display();

    arrOps.delete_at_index(2);
    arrOps.display();

    return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int binarySearch(const vector<int>& arr, int target){
    int left = 0;
    int right = arr.size() - 1;

    while(left <= right){
        int mid = left + (right - left) / 2;

        if(arr[mid] == target){
            return mid;
        }
        else if(arr[mid] > target){
            right  = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }

    return -1;
}


int main() {
    vector<int> arr = {2, 4, 7, 9, 5, 6, 1, 8};
    int target = 6;

    sort(arr.begin(), arr.end());

    int t = binarySearch(arr, target);

    (t != -1)? cout << "Target Found at index: " << t << endl
    :
    cout << "Target Not Found" << endl;

    return 0;
}

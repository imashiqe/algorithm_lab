#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target);

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 10;

    int result = binarySearch(arr, size, target);

    if (result != -1) {
        cout << "Element is present at index " << result << endl;
    } else {
        cout << "Element is not present in the array" << endl;
    }

    return 0;
}

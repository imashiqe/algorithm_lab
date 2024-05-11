#include <iostream>

int linearSearch(int A[], int n, int x) {
    for (int i = 0; i < n; i++) {
        if (A[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    int A[] = {3, 7, 1, 9, 5};
    int size = sizeof(A) / sizeof(A[0]);
    int x;

    std::cout << "Enter the element to search: ";
    std::cin >> x;

    int index = linearSearch(A, size, x);
    if (index != -1) {
        std::cout << "Element " << x << " found at index " << index << std::endl;
    } else {
        std::cout << "Element " << x << " not found" << std::endl;
    }

    return 0;
}

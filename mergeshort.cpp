#include <iostream>
#include <vector>
#include <climits>

void merge(std::vector<int>& A, int p, int q, int r) {
    int n1 = q - p + 1;
    int n2 = r - q;

    std::vector<int> L(n1 + 1);
    std::vector<int> R(n2 + 1);

    for (int i = 0; i < n1; ++i) {
        L[i] = A[p + i];
    }
    for (int j = 0; j < n2; ++j) {
        R[j] = A[q + 1 + j];
    }

    L[n1] = INT_MAX; 
    R[n2] = INT_MAX; 

    int i = 0, j = 0;
    for (int k = p; k <= r; ++k) {
        if (L[i] <= R[j]) {
            A[k] = L[i];
            i++;
        } else {
            A[k] = R[j];
            j++;
        }
    }
}

int main() {
   
    std::vector<int> A = {3, 7, 12, 18, 5, 8, 15, 17};
    int p = 0, q = 3, r = 7;

    merge(A, p, q, r);

    std::cout << "Merged array: ";
    for (int num : A) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}

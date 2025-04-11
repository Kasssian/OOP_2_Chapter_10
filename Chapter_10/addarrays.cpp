#include <iostream>
using namespace std;


void addarrays(float* arr1, float* arr2, float* result, int size) {
    for (int i = 0; i < size; i++) {
        *(result + i) = *(arr1 + i) + *(arr2 + i);
    }
}

int main() {
    const int SIZE = 5;
    float arr1[SIZE] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
    float arr2[SIZE] = { 0.9, 1.8, 2.7, 3.6, 4.5 };
    float result[SIZE];

    // Вызов функции addarrays
    addarrays(arr1, arr2, result, SIZE);

    // Вывод результатов
    cout << "Array 1: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr1 + i);
    }
    cout << "\nArray 2: ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(arr2 + i);
    }
    cout << "\nResult:  ";
    for (int i = 0; i < SIZE; i++) {
        cout << *(result + i);
    }

    cout << endl;

    return 0;
}

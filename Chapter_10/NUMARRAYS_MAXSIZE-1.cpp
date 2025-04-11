#include <iostream>
using namespace std;

int main() {
    const int NUMARRAYS = 10;
    const int MAXSIZE = 10;
    int a0[10], a1[10], a2[10], a3[10], a4[10], a5[10], a6[10], a7[10], a8[10], a9[10];
    int* ap[10] = { a0, a1, a2, a3, a4, a5, a6, a7, a8, a9 };

    for (int j = 0; j < NUMARRAYS; j++) {
        for (int k = 0; k < MAXSIZE; k++) {
            ap[j][k] = j * 10;
        }
    }

    for (int j = 0; j < NUMARRAYS; j++) {
        for (int k = 0; k < MAXSIZE; k++) {
            cout << ap[j][k] << " ";
        }
        cout << endl;
    }

    return 0;
}
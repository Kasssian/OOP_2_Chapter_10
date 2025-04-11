#include <iostream>
using namespace std;

int main() {
    const int NUMARRAYS = 10;
    const int MAXSIZE = 10;
    int* ap[NUMARRAYS];

    for (int j = 0; j < NUMARRAYS; j++) {
        *(ap + j) = new int[MAXSIZE];
    }

    for (int j = 0; j < NUMARRAYS; j++) {
        for (int k = 0; k < MAXSIZE; k++) {
            *(*(ap + j) + k) = j * 10;
        }
    }

    for (int j = 0; j < NUMARRAYS; j++) {
        for (int k = 0; k < MAXSIZE; k++) {
            cout << *(*(ap + j) + k) << " ";
        }
        cout << endl;
    }

    return 0;
}
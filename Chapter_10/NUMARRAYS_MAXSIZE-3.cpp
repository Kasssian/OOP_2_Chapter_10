#include <iostream>
using namespace std;

class Array {
private:
    const int NUMARRAYS = 10;
    const int MAXSIZE = 10;
    int* ap[10];
public:
    Array() {
        for (int j = 0; j < NUMARRAYS; j++) {
            ap[j] = new int[MAXSIZE];
        }
    }
    int& operator[](int n) {
        int j = n / MAXSIZE;
        int k = n % MAXSIZE;
        return ap[j][k];
    }
};

int main() {
    Array a;
    for (int i = 0; i < 100; i++) {
        a[i] = i / 10 * 10;
    }
    for (int i = 0; i < 100; i++) {
        cout << a[i] << " ";
        if ((i + 1) % 10 == 0) cout << endl;
    }
    return 0;
}
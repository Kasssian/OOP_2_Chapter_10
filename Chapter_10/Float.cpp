#include <iostream>
using namespace std;

const int MEMSIZE = 1000;
float fmemory[MEMSIZE];
int pmemory[MEMSIZE];
int fmem_top = 0;
int pmem_top = 0;

class Float {
private:
    int addr;
public:
    Float(float value) {
        fmemory[fmem_top] = value;
        addr = fmem_top++;
    }
    int& operator&() {
        return addr;
    }
};

class ptrFloat {
private:
    int addr;
public:
    ptrFloat(int a) {
        pmemory[pmem_top] = a;
        addr = pmem_top++;
    }
    float& operator*() {
        return fmemory[pmemory[addr]];
    }
};

int main() {
    Float var1 = 1.234;
    Float var2 = 5.678;
    ptrFloat ptr1 = &var1;
    ptrFloat ptr2 = &var2;

    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;

    *ptr1 = 7.123;
    *ptr2 = 8.456;

    cout << "*ptr1 = " << *ptr2 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;

    return 0;
}
#include <iostream>
#include <cstring>
using namespace std;

class person {
private:
    char name[40];
    float salary;
public:
    void setData() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter salary: ";
        cin >> salary;
    }
    void printData() {
        cout << "Name: " << name << ", Salary: " << salary << endl;
    }
    float getSalary() {
        return salary;
    }
};

void salsort(person** pp, int n) {
    for (int j = 0; j < n - 1; j++) {
        for (int k = j + 1; k < n; k++) {
            if ((*(pp + j))->getSalary() > (*(pp + k))->getSalary()) {
                person* temp = *(pp + j);
                *(pp + j) = *(pp + k);
                *(pp + k) = temp;
            }
        }
    }
}
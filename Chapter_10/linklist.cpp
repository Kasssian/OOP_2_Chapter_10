#include <iostream>
using namespace std;

struct link {
    int data;
    link* next;
};

class linklist {
private:
    link* first;
public:
    linklist() { first = NULL; }
    void additem(int d) {
        link* newlink = new link;
        newlink->data = d;
        newlink->next = NULL;
        if (!first) {
            first = newlink;
        }
        else {
            link* current = first;
            while (current->next) {
                current = current->next;
            }
            current->next = newlink;
        }
    }
    void display() {
        link* current = first;
        while (current) {
            cout << current->data << endl;
            current = current->next;
        }
    }
};
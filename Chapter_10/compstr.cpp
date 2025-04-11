#include <iostream>
using namespace std;

int compstr(char* s1, char* s2) {
    while (*s1 && *s2) {
        if (*s1 < *s2) return -1;
        if (*s1 > *s2) return 1;
        s1++;
        s2++;
    }
    if (*s1) return 1;
    if (*s2) return -1;
    return 0;
}

int main() {
    char str1[] = "apple";
    char str2[] = "banana";
    char str3[] = "apple";

    cout << "apple vs banana: " << compstr(str1, str2) << endl;
    cout << "banana vs apple: " << compstr(str2, str1) << endl;
    cout << "apple vs apple: " << compstr(str1, str3) << endl;

    return 0;
}
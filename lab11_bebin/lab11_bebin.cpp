#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "Ukrainian");
    int a, b;
    int* ptrA, * ptrB;

    cout << "значення а: ";
    cin >> a;
    cout << "значення b: ";
    cin >> b;

    ptrA = &a;
    ptrB = &b;

    *ptrA *= 2;

    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;

    cout << "нове значення a: " << a << endl;
    cout << "нове значення b: " << b << endl;

    return 0;
}
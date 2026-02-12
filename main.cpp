// COMSC-210 | Lab 5 | Barsbek
#include <iostream>
using namespace std;

int swap(int* ptrOne, int* ptrTwo);

int main() {
    int x = 5, y = 10;

    cout << "x = " << x << "  | y = " << y << endl;

    cout << "Swapping...\n";
    int sum = swap(&x, &y);
    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;

    return 0;
}

int swap(int* a, int* b) { // int* a = &x        int* b = &y;
    int temp = *a; // temp = 5
    *a = *b;
    *b = temp;
    return *a + *b; //10 + 5;
}
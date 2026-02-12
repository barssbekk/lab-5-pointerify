// COMSC-210 | Lab 5 | Barsbek
#include <iostream>
using namespace std;

int swap(int* addressOne, int* addressTwo);

int main() {
    int x = 5, y = 10;

    cout << "x = " << x << "  | y = " << y << endl;
    cout << "Swapping...\n";

    int* addressX = &x;
    int* addressY = &y;
    int sum = swap(addressX, addressY); // Sum takes pointers/addresses

    cout << "x = " << x << " | y = " << y << endl;
    cout << "sum = " << sum << endl;

    return 0;
}

int swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return *a + *b;
}
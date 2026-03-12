#include <iostream>
using namespace std;
void swap(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void swap(int a, int b) {
    int temp;
    temp = a;
    a = b;
    b = temp;

    cout << "Inside function: a = " << a << " b = " << b << endl;
    swap(x, y);

    cout << "After swapping: x = " << x << " y = " << y << endl;
    
}

int main() {
    int x = 10, y = 20;

    swap(x, y);

    cout << "Outside function: x = " << x << " y = " << y << endl;

    return 0;
}

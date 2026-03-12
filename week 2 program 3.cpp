#include <iostream>
using namespace std;

int main() {
    int n, arr[100];
    int *p;

    cout << "Enter number of elements: ";
    cin >> n;

    p = arr;   // pointer pointing to array

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> *(p + i);   // reading using pointer
    }

    cout << "Array elements are:\n";
    for(int i = 0; i < n; i++) {
        cout << *(p + i) << " ";   // displaying using pointer
    }

    return 0;
}
#include <iostream>
using namespace std;

int main() {
    int arr[100], n, key, count = 0;

    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter elements:\n";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for(int i = 0; i < n; i++) {
        if(arr[i] == key) {
            count++;
        }
    }

    if(count > 0)
        cout << "Element occurs " << count << " times";
    else
        cout << "Element not found";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[50], size, i, num, pos;
    cout << "Enter Size of Array: ";
    cin >> size;
    cout << "Enter elements of the array: ";
    for (i = 0; i < size; i++) {
        cin >> a[i];
    }
    cout << "Enter data to insert: ";
    cin >> num;
    cout << "Enter Position: ";
    cin >> pos;
    if (pos < 1 || pos > size + 1) {
        cout << "Invalid Position" << endl;
    } else {
        for (i = size - 1; i >= pos - 1; i--) {
            a[i + 1] = a[i];
        }
        a[pos - 1] = num;
        size++;
        cout << "Array after insertion: ";
        for (i = 0; i < size; i++) {
            cout << a[i] << " ";
        }
    }
    return 0; 
}

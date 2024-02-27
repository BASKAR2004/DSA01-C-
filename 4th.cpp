#include<iostream>
using namespace std;
int main() {
    const int maxSize = 100;
    int arr[maxSize], size, position, newValue;
    cout << "Enter the size of the array: ";
    cin >> size;
    cout << "Enter elements of the array:"<<endl;
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }
    cout << "Enter the position to insert the new value: ";
    cin >> position;
    if (position >= 1 && position <= size + 1) {
        cout << "Enter the new value to insert: ";
        cin >> newValue;
        for (int i = size; i >= position; --i) {
            arr[i] = arr[i - 1];
        }
        arr[position - 1] = newValue;
        cout << "Array after insertion"<<endl;
        for (int i = 0; i <= size; ++i) {
            cout << arr[i] << " ";
        }
    } else {
        cout << "Invalid." << endl;
    }
    return 0;
}

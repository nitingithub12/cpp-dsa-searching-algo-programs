#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int arr[] = {2, 3, 4, 10, 40};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 10;
    int result = linearSearch(arr, size, key);
    if (result == -1)
        cout << "Element not present in array";
    else
        cout << "Element found at index " << result;
    return 0;
}

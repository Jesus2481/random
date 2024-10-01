#include <iostream>
#include <cstdlib> 

using namespace std;

int main() {
    const int size = 20;
    int arr[size];

    for (int i = 0; i < size; ++i) {
        arr[i] = rand() % 16 - 5; 
    }

    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
        if ((i + 1) % 10 == 0) {
            cout << endl;
        }
    }

    return 0;
}
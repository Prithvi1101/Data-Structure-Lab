#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "enter array size: ";
    cin >> n;
    int ar[n];
    cout << "Enter elements: ";
    for(int i = 0; i < n; i++) {
        cin >> ar[i];
    }
    // Bubble Sort
    for (int step = 0; step < n - 1; step++) {
        for (int i = 0; i < n - 1 - step; i++) {
            if (ar[i] > ar[i + 1]) {
                swap(ar[i], ar[i + 1]);
            }
        }
    }

    cout << "after bubble sort: ";
    for (int i = 0; i < n; i++) {
        cout << " " << ar[i];
    }
    cout << endl;

    return 0;
}

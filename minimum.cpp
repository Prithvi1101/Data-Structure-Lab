#include <iostream>

using namespace std;

int main() {
 int arr[] = {100, 20, 30, 70, 50, 10};
 int size = sizeof(arr) / sizeof(arr[0]);

 int minIndex = 0;
 for (int i = 1; i < size; i++) {
   if (arr[i] < arr[minIndex]) {
     minIndex = i;
   }
 }

 cout << "The position of the minimum element is: " << minIndex << endl;

 return 0;
}

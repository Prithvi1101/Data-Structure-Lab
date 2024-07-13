#include <iostream>

using namespace std;

int main() {
    cout << "Prime numbers up to 500 are: ";

    for (int num = 2; num <= 500; num++) {
        int flag = 0;

        for (int i = 2; i < num; i++) {
            if (num % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            cout << num << " ";
        }
    }

    cout << endl;
    return 0;
}

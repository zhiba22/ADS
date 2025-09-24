#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int* data = new int[n];

    for (int i = 0; i < n; i++) {
        cin >> data[i];
    }

    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = i - 1; j >= 0; j--) {
            if (data[j] <= data[i]) {
                cout << data[j] << " ";
                found = true;
                break;
            }
        }
        if (!found) {
            cout << -1 << " ";
        }
    }

    delete[] data;
    return 0;
}
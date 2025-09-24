#include <iostream>
using namespace std;

bool isPrime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++)
        if (x % i == 0) return false;
    return true;
}

int main() {
    int n, count = 0, num = 1;
    cin >> n;

    while (count < n) {
        num++;
        if (isPrime(num)) count++;
    }

    cout << num;
    return 0;
}

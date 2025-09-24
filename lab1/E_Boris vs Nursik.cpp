#include <iostream>
using namespace std;

int main() {
    int Boric[1000000], Nuric[1000000];
    int b_head = 0, b_tail = 5;
    int n_head = 0, n_tail = 5;

    for (int i = 0; i < 5; i++) {
        cin >> Boric[i];
    }

    for (int i = 0; i < 5; i++) {
        cin >> Nuric[i];
    }

    int moves = 0;
    const int MAX_MOVES = 1000000;

    while (b_head < b_tail && n_head < n_tail && moves <= MAX_MOVES) {
        int b = Boric[b_head++];
        int n = Nuric[n_head++];

        bool nur_wins;

        if (n == 0 && b == 9) {
            nur_wins = true;
        } else if (n == 9 && b == 0) {
            nur_wins = false;
        } else {
            nur_wins = n > b;
        }

        if (nur_wins) {
            Nuric[n_tail++] = b;
            Nuric[n_tail++] = n;
        } else {
            Boric[b_tail++] = b;
            Boric[b_tail++] = n;
        }

        moves++;
    }

    if (moves > MAX_MOVES) {
        cout << "blin nichya";
    } else if (b_head == b_tail) {
        cout << "Nursik " << moves;
    } else {
        cout << "Boris " << moves;
    }

    return 0;
}
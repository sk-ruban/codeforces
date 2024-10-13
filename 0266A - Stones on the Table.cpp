#include <iostream>
using namespace std;

int main() {
    int n, count = 0;
    char prev, current;

    cin >> n >> prev;

    for (int i = 1; i < n; ++i) {
        cin >> current;
        if (current == prev) {
           count++;
        }
        prev = current;
    }

    cout << count << endl;
    return 0;
}

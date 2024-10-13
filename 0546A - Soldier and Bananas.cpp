#include <iostream>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int cost = k * ((w * (w + 1)) / 2);
    int borrow = cost > n ? cost - n : 0;
    cout << borrow << endl;

    return 0;
}

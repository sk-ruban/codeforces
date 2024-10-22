#include <iostream>
using namespace std;

int main() {
    int n, k;
    int width = 0;
    cin >> n >> k;

    for (int i = 0; i < n; ++i) {
        int height;
        cin >> height;
        if (height > k) {
            width += 2;
        } else {
            ++width;
        }
    }

    cout << width << endl;
    return 0;
}

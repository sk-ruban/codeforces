#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    if ((n % 2 == 0) && (n != 2))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}

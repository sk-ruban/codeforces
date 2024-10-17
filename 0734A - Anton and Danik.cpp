#include <iostream>
using namespace std;

int main() {
    int i;
    string s;

    cin >> i >> s;

    int anton = count(s.begin(), s.end(), 'A');
    int danik = i - anton;

    if (anton > danik) cout << "Anton\n";
    else if (anton < danik) cout << "Danik\n";
    else cout << "Friendship\n";

    return 0;
}

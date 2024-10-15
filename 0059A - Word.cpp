#include <iostream>
using namespace std;

int main() {
    string s;
    int upper {0};
    int lower {0};
    cin >> s;

    for (size_t i = 0; i < s.length(); ++i) {
        if (isupper(s[i])) {
            upper += 1;
        } else {
            lower += 1;
        }
    }

    if (upper > lower) {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
    } else {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
    }

    cout << s << endl;

    return 0;
}

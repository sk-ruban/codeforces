#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int count = 0;
    int n;
    cin >> n;

    for (int i = 0; i < n; ++i)
    {
        string str;
        cin >> str;

        switch(str[1])
        {
            case '+': ++count; break;
            case '-': --count; break;
        }
    }

    cout << count << "\n";
    return 0;
}

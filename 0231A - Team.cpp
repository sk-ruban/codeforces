#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    int count = 0;
    cin >> n;
    
    for (int i = 0; i < n; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        count += (a + b + c >= 2);
    }

    cout << count << "\n";
    return 0;
}

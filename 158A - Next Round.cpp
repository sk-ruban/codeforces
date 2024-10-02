#include <iostream>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, k;
    cin >> n >> k;

    int pass = 0;
    int count = 0;


    for (int i = 1; i <= n; ++i)
    {
        int score;
        cin >> score;

        if (i == k)
            pass = score;
        if (score >= pass && score > 0)
            ++count;
        else if (i >= k)
            break;
        if (i == k && score == 0)
            break;
     }
    
    cout << count << endl;
    return 0;
}

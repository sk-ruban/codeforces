#include <iostream>
using namespace std;

int main() {
    int n, i;
    int cap = 0;
    int passengers = 0;

    cin >> n;

    for (i = 0; i < n; ++i) {
        int enter = 0, exit = 0;

        cin >> exit >> enter;
        passengers = passengers - exit + enter;
        
        cap = max(cap, passengers);
    }
    
    cout << cap << endl;
    return 0;
}

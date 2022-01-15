#include <bits/stdc++.h>
using namespace std;

int main() {
    int tt;
    cin >> tt;
    while (tt--) {
        int n;
        cin >> n;
        if (n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336)  
            cout << n << " is perfect" << endl;
        else cout << n << " is not perfect" << endl;
    }

    return 0;
}

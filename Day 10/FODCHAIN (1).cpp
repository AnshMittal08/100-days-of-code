#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x;
        int k;
        int count = 0;

        cin >> x >> k;

        while (x > 0) {
            count++;
            x = (x / k);
        }

        cout << count << endl;
    }
    return 0;
}

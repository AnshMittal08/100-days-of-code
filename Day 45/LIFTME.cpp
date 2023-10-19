#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, q;
        cin >> n >> q;

        long long count = 0;
        int currentFloor = 0; 

        while (q--) {
            int f, d;
            cin >> f >> d;
            count += abs(currentFloor - f) + abs(f - d);
            currentFloor = d;
        }

        cout << count << endl;
    }
    return 0;
}

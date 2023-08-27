#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }

        vector<int> frequency(n + 1, 0);
        for (int i = 0; i < n; i++) {
            frequency[v[i]]++;
        }

        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (i != v[i - 1] && frequency[i] >= k) {
                count++;
            }
        }

        cout << count << endl;
    }
    return 0;
}

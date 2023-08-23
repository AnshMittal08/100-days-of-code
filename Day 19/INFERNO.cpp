#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;

        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        int singleTime = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i] % x == 0) {
                singleTime += (arr[i] / x);
            } else {
                singleTime += ((arr[i] / x) + 1);
            }
        }

        sort(arr, arr + n);
        int multiTime = arr[n - 1];

        if (multiTime > singleTime)
            cout << singleTime << endl;
        else
            cout << multiTime << endl;
    }
    return 0;
}

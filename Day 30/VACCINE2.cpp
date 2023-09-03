#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;

        int arr[n];
        int count = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (arr[i] >= 80 || arr[i] <= 9)
                count++;
        }

        int result = 0;

        if (count % d == 0)
            result = count / d;
        else
            result = (count / d) + 1;

        int diff = n - count;

        if (diff % d == 0)
            result += diff / d;
        else
            result += (diff / d) + 1;

        cout << result << endl;
    }
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, u, d;
        cin >> n >> u >> d;

        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        int count = 1, jump = 1;

        for (int i = 0; i < n - 1; i++) {
            if (arr[i] <= arr[i + 1]) {
                if ((arr[i + 1] - arr[i]) <= u) {
                    count++;
                } else {
                    break;
                }
            } else {
                if (arr[i] - arr[i + 1] <= d) {
                    count++;
                } else if (jump) {
                    count++;
                    jump--;
                } else {
                    break;
                }
            }
        }

        cout << count << endl;
    }

    return 0;
}

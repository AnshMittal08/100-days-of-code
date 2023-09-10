#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        int sum = 0;

        for (int num = l; num <= r; num++) {
            int temp = num;
            int rev = 0;

            while (temp > 0) {
                int digit = temp % 10;
                rev = rev * 10 + digit;
                temp /= 10;
            }

            if (num == rev) {
                sum += num;
            }
        }

        cout << sum << endl;
    }
    return 0;
}

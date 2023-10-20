#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s1, s2;
        cin >> s1 >> s2;
        int count = 0;
        set<char> s3(s1.begin(), s1.end());

        for (char ch : s3) {
            for (char c : s2) {
                if (ch == c) {
                    count++;
                }
            }
        }
        cout << count << endl;
    }
    return 0;
}

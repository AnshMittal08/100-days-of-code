#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<string> v;
        vector<string> v1;
        for (int i = 0; i < n; i++) {
            string ele, ele1;
            cin >> ele >> ele1;
            v.push_back(ele);
            v1.push_back(ele1);
        }

        for (int i = 0; i < n; i++) {
            bool flag = false;
            for (int j = 0; j < n; j++) {
                if (v[i] == v[j] && i != j) {
                    flag = true;
                    break; 
                }
            }
            if (flag) {
                cout << v[i] << " " << v1[i] << endl;
            } else {
                cout << v[i] << endl;
            }
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<string> s;
        for (int i = 0; i < n; i++) {
            string ele;
            cin >> ele;
            s.push_back(ele);
        }

        int c = 0, o = 0, d = 0, e = 0, h = 0, f = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < s[i].length(); j++) {
                if (s[i][j] == 'c')
                    c++;
                else if (s[i][j] == 'o')
                    o++;
                else if (s[i][j] == 'd')
                    d++;
                else if (s[i][j] == 'e')
                    e++;
                else if (s[i][j] == 'h')
                    h++;
                else if (s[i][j] == 'f')
                    f++;
            }
        }

        cout<<min(c/2, min(e/2, min(h, min(d, min(f,o)))))<<endl;
    }
    return 0;
}

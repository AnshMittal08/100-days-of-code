#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long int n;
        cin >> n;

        unordered_map<long int, long int> count;
        for (long int i = 0; i < n; i++) {
            long int x;
            cin >> x;
            count[x]++;
        }

        long int totalPairs = 0;

        for (auto const& pair : count) {
            long int occurrences = pair.second;
            totalPairs += (occurrences * (occurrences - 1)) / 2;
        }

        cout << totalPairs << endl;
    }
    return 0;
}

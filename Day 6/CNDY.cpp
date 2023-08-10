#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> arr;
        vector<int> arr1;
        bool flag = true;
        for (int i = 0; i < 2 * n; i++) {
            int ele;
            cin >> ele;
            arr.push_back(ele);
            arr1.push_back(ele);
        }

        sort(arr.begin(), arr.end());   
        arr.erase(unique(arr.begin(), arr.end()), arr.end());  

        for (int i = 0; i < arr.size(); i++) {
            int elemCount=0;
            for(int j=0;j < arr1.size(); j++)
            {
                if(arr[i]==arr1[j])
                elemCount++;
            }
            if (elemCount > 2) {
                flag = false;
                break;
            }
        }
        if (flag)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}

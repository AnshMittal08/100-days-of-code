#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,w;
        cin>>n>>w;
        
        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int ele;
            cin>>ele;
            v.push_back(ele);
        }
        
        sort(v.begin(),v.end());
        
        int sum=0,count=0;
        for(int i=n-1;i>=0;i--)
        {
            if(v[i]>=w)
            {
                cout<<(n-1)<<endl;
                break;
            }
            else if(sum<w)
            {
                sum+=v[i];
                count++;
                if(sum>=w)
                {
                    cout<<(n-count)<<endl;
                    break;
                }
            }
        }
        
    }
	return 0;
}

#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v;
	    vector<int> v1;
	    vector<int> v2;
	    for (int i = 0; i < n; i++) {
            int ele;
            cin >> ele;
            v.push_back(ele);
            v1.push_back(ele);
        }
        
        sort(v.begin(), v.end());   
        v.erase(unique(v.begin(), v.end()), v.end());
        
            
        for(int i=0;i<v.size();i++)
        {
            int count=0;
            for(int j=0;j<v1.size();j++)
            {
                if(v[i]==v1[j])
                {
                    count++;
                }
            }
            
            v2.push_back(count);
        }
        
        int max=0;
        int ele;
        for(int i=0;i<v.size();i++)
        {
            if(max<v2[i])
            {
                max=v2[i];
                ele=v[i];
            }
            
            else if(max==v2[i])
                if(ele>v[i])
                ele=v[i];
        }
        
        cout<<ele<<" "<<max<<endl;
	}
	return 0;
}

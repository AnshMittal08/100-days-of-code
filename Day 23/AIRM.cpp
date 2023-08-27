#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v1;
	    vector<int> v2;
	    for(int i=0;i<(2*n);i++)
	    {
	        int ele;
	        cin>>ele;
	        v1.push_back(ele);
	        v2.push_back(ele);
	    }
	    
	    sort(v1.begin(),v1.end());
	    v1.erase(unique(v1.begin(), v1.end()), v1.end());
	    
	    int count=0;
	    for(int i=0;i<v1.size();i++)
	    {
	        int frequency=0;
	        for(int j=0;j<(2*n);j++)
	        {
	            if(v1[i]==v2[j])
	            frequency++;
	        }
	        count = count<frequency?frequency:count;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

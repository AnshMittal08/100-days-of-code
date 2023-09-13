#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    int min=v[0];
	    int max=v[0];
	    bool flag = true;
	    for(int i=1;i<n;i++)
	    {
	        if(min<=v[i])
	        min = v[i];
	        
	        else if(max>=v[i])
	        max = v[i];
	        
	        else
	        {
	            cout<<"NO"<<endl;
	            flag = false;
	            break;
	        }
	    }
	    
	    if(flag)
	    cout<<"YES"<<endl;
	}
	return 0;
}

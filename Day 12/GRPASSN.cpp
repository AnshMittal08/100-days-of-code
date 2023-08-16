#include <bits/stdc++.h>
#include<algorithm>
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
	    for(int i=0;i<n;i++)
	    {
	        int ele;
	        cin>>ele;
	        v.push_back(ele);
	        v1.push_back(ele);
	    }
	    
	    sort(v.begin(),v.end());
	    v.erase(unique(v.begin(),v.end()),v.end());
	    
	    bool flag=true;
	    
	    for(int i=0;i<v.size();i++)
	    { 
	        int count=0;
	        for(int j=0;j<v1.size();j++)
	        {
	            if(v[i]==v1[j])
	            count++;
	        }
	        if(count%v[i]!=0)
	        {
	            flag=false;
	            break;
	        }
	    }
	    if(flag)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	   
	}
	return 0;
}

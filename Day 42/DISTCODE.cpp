#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    
	    vector<string> v;
	    for(int i=0;i<s.size()-1;i++)
	    {
	        string b={};
	        b+=s[i];
	        b+=s[i+1];
	        v.push_back(b);
	    }
	    
	    int count = 1;
	    sort(v.begin(),v.end());
	    for(int i=1;i<v.size();i++)
	    {
	        if(v[i]!=v[i-1])
	        count++;
	    }
	    
	    cout<<count<<endl;
	    
	}
	return 0;
}

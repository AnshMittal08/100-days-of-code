#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    string s;
	    cin>>s;
	    int size=s.length();
	    
	    int count=0;
	    for(int i=0;i<size;i++)
	    {
	        if(isdigit(s[i]))
	        count+=s[i]-48;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

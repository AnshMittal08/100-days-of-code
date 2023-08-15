#include <bits/stdc++.h>
#include <string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string x;
	    cin>>x;
	    int count=0;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(x[i]==x[i+1])
	        i++;
	        
	        count++;
	       
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

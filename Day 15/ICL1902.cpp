#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int x=n,count=0;
	    
	    while(x>0)
	    {
	        int max=sqrt(x);
	        x=x-(max*max);
	        count++;
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

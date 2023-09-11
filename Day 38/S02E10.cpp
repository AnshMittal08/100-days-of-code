#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,k;
	    cin>>n>>x>>k;
	    
	    int ross[n],russ[n];
	    for(int i=0;i<n;i++)
	    cin>>ross[i];
	    
	    for(int i=0;i<n;i++)
	    cin>>russ[i];
	    
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	         if(abs(ross[i]-russ[i])<=k)
	         sum++;
	    }
	    
	    if(sum>=x)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

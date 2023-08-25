#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y,n,r;
	    cin>>x>>y>>n>>r;
	    
	    int normal=0,premium=0;
	    
	    if(r<x*n)
	    cout<<-1<<endl;
	    else
	    {
	        premium=(r-x*n)/(y-x);
	        if(premium>n)
	        premium=n;
	        normal=n-premium;
	        cout<<normal<<" "<<premium<<endl;
	    }
	}
	return 0;
}

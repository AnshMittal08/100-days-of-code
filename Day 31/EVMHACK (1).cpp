#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,p,q,r;
	    cin>>a>>b>>c>>p>>q>>r;
	    
	    float average = (p+q+r)/2;
	    
	    if(a+b+c>average || p+b+c>average || a+q+c>average || a+b+r>average)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

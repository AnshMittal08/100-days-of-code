#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int l,r,m;
	    cin>>l>>r>>m;
	    
	    int total = m%l==0 ? m/l : (m/l)+1;
	    total = total + m/r;
	    
	    cout<<total<<endl;
	}
	return 0;
}

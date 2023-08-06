#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    int max=0,count=0;
	    cin>>n;
	    
	    int a[n],b,c,d;
	    for(int i=0;i<n;i++)
	    {
	    cin>>a[i];
	    if (a[i] == 1 || a[i] == n) {
	    d = a[i];
	            
	    if (a[i] == 1) b = i;
	    else c = n-i-1;
	    }
	    }
	    
	    cout<<(d==n?b+c:b+c-1)<<endl;
	}
	return 0;
}

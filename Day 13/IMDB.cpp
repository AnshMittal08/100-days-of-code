#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n,x,max=0;
	    cin>>n>>x;
	    while(n--)
	    {
	       long long int s,r;
	       cin>>s>>r;
	       if(s<=x)
	       {
	           max = max<r?r:max;
	       }
	    }
	   
	    cout<<max<<endl;
	}
	return 0;
}

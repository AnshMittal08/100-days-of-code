#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,n;
	    cin>>a>>b>>n;
	    
	    int ans = n - n%a;
	    int ans1=0;
	    if(a%b==0) ans1=-1;
	    
	    if(n%a!=0)
	    ans+=a;
	    
	    if(ans%b==0)
	    ans+=a;
	    
	    cout<<(ans1==-1?ans1:ans)<<endl;
	}
	return 0;
}

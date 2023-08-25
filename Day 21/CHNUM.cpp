#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    
	    long int arr[n];
	    int count=0;
	    
	    for(int i=0;i<n;i++) {
	    cin>>arr[i];
	    if(arr[i]<0)
	    count++;
	    }
	    
	    if(count==0 || count==n)
	    cout<<n<<" "<<n<<endl;
	    else if(count>abs(n-count))
	    cout<<count<<" "<<n-count<<endl;
	    else
	    cout<<n-count<<" "<<count<<endl;
	}
	return 0;
}

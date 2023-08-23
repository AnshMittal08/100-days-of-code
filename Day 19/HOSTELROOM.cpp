#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    int arr[n];
	    int sum=x;
	    int maxx=x;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        sum+=arr[i];
	        maxx=max(sum,maxx);
	    }
	    cout<<maxx<<endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    
	    long long int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    long long int sum=0;
	    for(int i=0;i<(n-1);i++)
	    {
	        sum=sum+(abs(arr[i]-arr[i+1]))-1;
	    }
	    
	    cout<<sum<<endl;
	}
	return 0;
}

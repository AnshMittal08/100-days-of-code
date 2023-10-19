#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long long int n;
	    cin>>n;
	    
	    long long int arr[n];
	    for(long long int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    cout<<((n-1)*(n))/2<<endl;
	}
	return 0;
}

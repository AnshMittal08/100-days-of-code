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
	    long long int max=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	        max = max>arr[i]+i?max:arr[i]+i;
	    }
	    
	    cout<<max<<endl;
	    
	}  
	return 0;
}

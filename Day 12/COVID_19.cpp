#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    int sum=0;
	    
	    for(int i=0;i<n;i=i+2)
	        for(int j=0;j<m;j+=2)
	            sum++;
	    cout<<sum<<endl;

	}
	return 0;
}

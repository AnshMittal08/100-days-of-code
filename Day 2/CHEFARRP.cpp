#include <iostream>
#include<vector>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    
	    vector<int> v(n);
	    for(int i=0;i<n;i++)
	    cin>>v[i];
	    
	    for(int i=0;i<n;i++)
	    {
	        int sum=0,product=1;
	        for(int j=i;j<n;j++)
	        {
	            sum+=v[j];
	            product*=v[j];
	            
	            if(sum==product)
	            count++;
	        }
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

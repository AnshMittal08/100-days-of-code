#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n],d[n];
	    int index = -1;
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cin>>d[i];
	    }
	    
	    if(a[1]+a[n-1] < d[0]) 
	    index = d[0];
	    
		if(a[n-2]+a[0] < d[n-1]) 
		index = index<d[n-1]?d[n-1]:index;
	    
	    for(int i=1;i<n-1;i++)
	    {
	          if(d[i]>(a[i+1]+a[i-1]))
	          {
	              if(index<d[i])
	              {
	                  index=d[i];
	              }
	          }
	    }
	    
	    cout<<index<<endl;
	}
	return 0;
}

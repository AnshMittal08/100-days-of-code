#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int a[n];
	    int b[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    
	    int max = 0;
	    int max1=0;
	    int index = 0;
	    for(int i=0;i<n;i++)
	    {
	        if(max<a[i])
	        {
	        max=a[i];
	        max1=b[i];
	        index=i;
	        }
	        else if(max==a[i])
	        {
	            if(b[i]>max1)
            {
	            max1=b[i];
	            index=i;
            }
	        }
	    }
	    
	    cout<<index+1<<endl;
	}
	return 0;
}

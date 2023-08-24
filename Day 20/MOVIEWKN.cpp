#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    int in[n],r[n];
	    
	    for(int i=0;i<n;i++)
	    cin>>in[i];
	    for(int i=0;i<n;i++)
	    cin>>r[i];
	    
	    int max=0;
	    int index=0;
	    int rating=0;
	    for(int i=0;i<n;i++)
	    {
	        if((in[i]*r[i])>max) {
	        max = in[i]*r[i];
	        index = i+1;
	        rating = r[i];
	        }
	        
	        else if(max == (in[i]*r[i]))
	        {
	            if(r[i]>rating) {
	            index = i+1;
	            rating = r[i];
	            }
	            else if(r[i]==rating)
	            {
	                index = (i+1)<index?(i+1):index;
	            }
	        }
	    }
	    
	    cout<<index<<endl;
	}
	return 0;
}

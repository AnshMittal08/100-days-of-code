#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    
	     string arr;
	     cin>>arr;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]=='1')
	        count++;
	    }
	    
	    int total = (120-n)+count;
	    int percentage = total*100 /120;
	    
	    if(percentage>=75)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}

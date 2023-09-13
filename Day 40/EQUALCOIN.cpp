#include <iostream>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--)
	{
	    long int x,y;
	    cin>>x>>y;
	    
	    if(x%2!=0)
	    cout<<"NO"<<endl;
	    
	    else if(x%2==0)
	    {
	        if(y%2==0)
	        cout<<"YES"<<endl;
	        else if(y%2!=0)
	        {
	            if(x==0)
	            cout<<"NO"<<endl;
	            else
	            cout<<"YES"<<endl;
	        }
	    }
	}
	return 0;
}

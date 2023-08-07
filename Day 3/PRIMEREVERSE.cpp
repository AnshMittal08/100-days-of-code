#include <iostream>
#include<string>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    string x,y;
	    cin>>x>>y;
	    
	    int count=0,count1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(x[i]=='1')
	        count+=1;
	        
	        if(y[i]=='1')
	        count1+=1;
	    }
	    
	    if(count==count1)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

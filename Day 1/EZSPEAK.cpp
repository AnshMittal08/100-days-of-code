//link to the problem - https://www.codechef.com/problems/EZSPEAK

#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,count=0;
	    cin>>n;
	    
	    string x;
	    cin>>x;
	    
	    for(int i=0;i<n;i++)
	    {
	        if(x[i]=='a'||x[i]=='e'||x[i]=='i'||x[i]=='o'||x[i]=='u')
	        {
	            count=0;
	            continue;
	        }
	        else
	        {
	            count++;
	            
	            if(count==4)
	            break;
	        }
	    }
	    
	    if(count<4)
	    cout<<"YES"<<endl;
	    
	    else
	    cout<<"NO"<<endl;
	}
	return 0;
}

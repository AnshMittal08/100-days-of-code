#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    
	    string str;
	    cin>>str;
	    
	    int a=0,b=n-1;
	    string n1="";
	    for(int i=0;i<n;i++)
	    {
	        if(i%2==0)
	        {
	            if(str[a]=='0')
	            n1 = str[a] + n1;
	            
	            else if(str[a]=='1')
	            n1 = n1 + str[a];
	            
	            a++;
	        }
	        
	        else if(i%2!=0)
	        {
	            if(str[b]=='0')
	            n1 = n1 + str[b];
	            
	            else if(str[b]=='1')
	            n1 = str[b] + n1;
	            
	            b--;
	        }
	    }
	    
	    cout<<n1<<endl;
	}
	return 0;
}

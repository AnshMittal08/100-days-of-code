#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    string nationality;
	    cin>>n>>nationality;
	    
	    int count=0;
	    while(n--)
	    {
	        string activities;
	        cin>>activities;
	        
	        if(activities == "CONTEST_WON")
	        {
	            int rank;
	            cin>>rank;
	            if(rank<20)
	            {
	                count = count + 300 + (20-rank);
	            }
	            else
	            {
	                count = count + 300;
	            }
	        }
	        
	        else if(activities == "BUG_FOUND")
	        {
	            int a;
	            cin>>a;
	            count = count+a;
	        }
	        
	        else if(activities == "TOP_CONTRIBUTOR")
	        {
	            count = count + 300;
	        }
	        
	        else if(activities == "CONTEST_HOSTED")
	        {
	            count = count + 50;
	        }
	    }
	    
	    if(nationality== "INDIAN")
	    {
	        cout<<(count/200)<<endl;
	    }
	    else
	    cout<<(count/400)<<endl;
	}
	return 0;
}

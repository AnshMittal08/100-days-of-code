#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int w;
	    cin>>w;
	    
	    string s;
	    cin>>s;
	    
	    int days=4;
	    for(int i=1;i<=7;i++)
	    {
	        if(w==28)
	        {
	            cout<<days<<" ";
	            continue;
	        }
	        
	        else if(w==30)
	        {
	            if(s=="mon")
	            {
	                if(i==1 || i==2)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="tues")
	            {
	                if(i==2 || i==3)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="wed")
	            {
	                if(i==3 || i==4)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="thurs")
	            {
	                if(i==4 || i==5)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="fri")
	            {
	                if(i==6 || i==5)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="sat")
	            {
	                if(i==6 || i==7)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="sun")
	            {
	                if(i==7 || i==1)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	        }
	        
	        else if(w==29)
	        {
	            if(s=="mon")
	            {
	                if(i==1)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="tues")
	            {
	                if(i==2)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="wed")
	            {
	                if(i==3)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="thurs")
	            {
	                if(i==4)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="fri")
	            {
	                if(i==5)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="sat")
	            {
	                if(i==6)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="sun")
	            {
	                if(i==7)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	        }
	        
	        else if(w==31)
	        {
	            if(s=="mon")
	            {
	                if(i==1 || i==2 ||i==3)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="tues")
	            {
	                if(i==2 || i==3 || i==4)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="wed")
	            {
	                if(i==3 || i==4 || i==5)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="thurs")
	            {
	                if(i==4 || i==5 || i==6)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="fri")
	            {
	                if(i==6 || i==5 ||i==7)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="sat")
	            {
	                if(i==6 || i==7 || i==1)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	            
	            if(s=="sun")
	            {
	                if(i==7 || i==1 || i==2)
	                cout<<days+1<<" ";
	                
	                else
	                cout<<days<<" ";
	            }
	        }
	    }
	    
	    cout<<endl;
	}
	return 0;
}

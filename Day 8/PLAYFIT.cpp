#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n;
	    cin>>n;
	    
	    long int arr[n];
	    for(int i=0;i<n;i++)
	    cin>>arr[i];
	    
	    
	    long int diff=0;
	    long int min = arr[0];
	    for(int i=0;i<n;i++)
	    {
	        if (arr[i] < min)
                min = arr[i];
            else if (arr[i] - min > diff)
                diff = arr[i] - min;
	    }
	   
	   if(diff>0)
	   cout<<diff<<endl;
	   else
	   cout<<"UNFIT"<<endl;
	}
	return 0;
}

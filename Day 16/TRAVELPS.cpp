#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b;
	    cin>>n>>a>>b;
	    
	    char arr[n];
	    cin>>arr;
	    
	    int count=0,count_1=0;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]=='0')
	        count=count+1;
	        else if(arr[i]=='1')
	        count_1=count_1+1;
	    }
	    
	    int answer = (a*count) + (b*count_1);
	    
	    cout<<answer<<endl;
	}
	return 0;
}

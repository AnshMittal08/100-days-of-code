#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,b;
	    cin>>n>>b;
	    int max=0;
	    while(n--)
	    {
	        int w,h,p;
	        cin>>w>>h>>p;
	        if(p<=b)
	        max = max<w*h?w*h:max;
	    }
	    
	    if(max>0)
	    cout<<max<<endl;
	    else
	    cout<<"no tablet"<<endl;
	}
	return 0;
}

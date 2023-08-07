#include <iostream>
using namespace std;

int main() {
	int t,k,m,j;
	cin>>t;
	for(j=1;j<=t;j++)
	{
	    int i=0;
	    cin>>m>>k;
	    
	    while(k<m)
	    {
	        i++;
	        k=k+i;
	    }
	    cout<<i<<endl;
	}
	return 0;
}

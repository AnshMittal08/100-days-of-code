#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    
	    int chaat = ((x/2)>y)?y:(x/2);
	    
	    cout<<chaat<<endl;
	}
	return 0;
}

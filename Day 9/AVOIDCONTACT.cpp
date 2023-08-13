#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int count;
	    count = 2*y + (x-y);
	    
	    cout<< (x==y ? count-1 : count) <<endl;
	}
	return 0;
}

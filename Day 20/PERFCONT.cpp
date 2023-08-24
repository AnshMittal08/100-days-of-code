#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,p;
	    cin>>n>>p;
	    int cake=0;
	    int hard=0;
	    while(n--)
	    {
	        int x;
	        cin>>x;
	        
	        int forCakewalk = p / 2;
	        int forHard = p / 10;
	        
	        
	        if(x>=forCakewalk)
	        cake++;
	        else if(x<=forHard)
	        hard++;
	    }
	    
	    if(cake == 1 && hard == 2)
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	}
	return 0;
}

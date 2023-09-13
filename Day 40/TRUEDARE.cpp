#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    set<int> x;
	    set<int> y;
	    
	    int tr;
	    cin>>tr;
	    for(int i=0;i<tr;i++) {
	    int ele;
	    cin>>ele;
	    x.insert(ele);
	    }
	    
	    int dr;
	    cin>>dr;
	    for(int i=0;i<dr;i++) {
	    int ele;
	    cin>>ele;
	    y.insert(ele);
	    }
	    
	    int a=x.size();
	    int b=y.size();
	    
	    int ts;
	    cin>>ts;
	    for(int i=0;i<ts;i++) {
	    int ele;
	    cin>>ele;
	    x.insert(ele);
	    }
	    
	    int ds;
	    cin>>ds;
	    for(int i=0;i<ds;i++) {
	    int ele;
	    cin>>ele;
	    y.insert(ele);
	    }
	    
	    if(a == x.size() && b==y.size())
	    cout<<"yes"<<endl;
	    else
	    cout<<"no"<<endl;
	    
	}
	return 0;
}

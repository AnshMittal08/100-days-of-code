#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        string x;
        cin>>n>>x;
        
        for(int i=0;i<(n-1);i+=2)
        {
            int temp=x[i];
            x[i]=x[i+1];
            x[i+1]=temp;
        }
        
        for(int i=0;i<n;i++)
        {
            x[i]= 97+(122-x[i]);
        }
        
        cout<<x<<endl;
    }
	return 0;
}

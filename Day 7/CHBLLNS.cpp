#include <iostream>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int R,G,B;
        cin>>R>>G>>B;
        
        int k;
        cin>>k;
        
        if(k==1)
        {
            cout<<1;
        }
        
        else
        {
            int r,g,b;
            
            r = (R>=k)?k-1:R;
            g = (G>=k)?k-1:G;
            b = (B>=k)?k-1:B;
            
            cout<<(long long int) r+g+b+1;
        }
        cout<<endl;
    }
	return 0;
}

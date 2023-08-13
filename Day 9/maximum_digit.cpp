#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ans=1,x=n;
    bool flag=false;
    if(n<0)
    {
        flag=true;
        x=abs(n);
    }
    while(x>0)
    {
        if(flag)
        {
            ans = ans<(x%10)?ans:(x%10);
            x=x/10;
        }
        else
        {
            ans = ans>(x%10)?ans:(x%10);
            x=x/10;
        }
    }
    if(flag)
    cout<<-ans<<endl;
    else
    cout<<ans<<endl;
}
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    
    int min = a<b?a:b;
    int count=0;

    while(min>0)
    {
        int x = a%10;
        int y = b%10;

        if(x==y)
        {
            count++;
        }

        a = a/10;
        b = b/10;
        min = min/10;
    }

    cout<<count<<endl;
}
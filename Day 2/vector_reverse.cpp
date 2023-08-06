//rotate the given array by 'k' steps,where k is non-negative. NOTE - k can be greater than n as well as n is the size of array.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> a;

    for(int i=0;i<5;i++)
    {
        int ele;
        cin>>ele;
        a.push_back(ele);
    }

    int k,n;
    n=a.size();
    k=2;
    k=k%n;

    reverse(a.begin(),a.end());
    reverse(a.begin(),a.begin()+k);
    reverse(a.begin()+k,a.end());

    for(int ele:a)
    {
        cout<<ele;
    }
}
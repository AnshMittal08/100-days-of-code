//Wap to find the difference between the sum of elements od even and odd indices
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v(6);
    int diff=0,sum_even=0,sum_odd=0;
    for(int i=0;i<v.size();i++)
    {
    cin>>v[i];
    if(i%2==0)
    sum_even=sum_even+v[i];
    else
    sum_odd=sum_odd+v[i];
    }

    diff=sum_even-sum_odd;

    cout<<diff<<endl;
}
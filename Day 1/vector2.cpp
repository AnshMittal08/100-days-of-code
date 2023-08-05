//take input from user and print it 

#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    for(int i=0;i<5;i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }

    //print using for loop

    for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    //print using for each loop

    for(int ele:v)
    {
        cout<<ele<<" ";
    }
    cout<<endl;
}
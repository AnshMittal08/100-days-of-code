#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;

    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(2);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.push_back(4);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;

    v.resize(8);
    cout<<"size: "<<v.size()<<endl;
    cout<<"capacity: "<<v.capacity()<<endl;
}
//linear search without function
#include<iostream>
using namespace std;
int main()
{
    int size;
    cout<<"enter size of the array: "; cin>>size;

    int arr[size];
    for(int i=0;i<size;i++)
    cin>>arr[i];

    int ele;
    cout<<"enter a element to be searched: ";
    cin>>ele;

    bool flag = false;
    for(int i=0;i<size;i++)
    if(arr[i]==ele)
    flag=true;

    if(flag)
    cout<<"element is present";
    else
    cout<<"element not found";


}
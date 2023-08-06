//rotate the given array by 'k' steps,where k is non-negative. NOTE - k can be greater than n as well as n is the size of array.

#include<iostream>
using namespace std;

int main()
{
    int n=5;
    int arr[n],arr1[n];
    for(int i=0;i<n;i++)
    cin>>arr[i];

    int k=3,j=0;
    k=k%n;

    for(int i=n-k;i<n;i++)
    arr1[j++]=arr[i];

    for(int i=0;i<=k;i++)
    arr1[j++]=arr[i];

    for(int ele:arr1)
    cout<<ele;
    cout<<endl;
}
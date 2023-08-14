#include<iostream>
using namespace std;

int search(int arr[],int size,int ele)
{
    int answer = -1;
    for(int i=0;i<size;i++)
    if(arr[i]==ele)
    answer=1;

    return answer;
}

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

    int value = search(arr,size,ele);

    if(value==-1)
    cout<<"element not found in the array";
    else if(value == 1)
    cout<<"element found in the array";
}
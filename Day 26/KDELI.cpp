#include <bits/stdc++.h>
using namespace std;

int main() {
    long int t;
	cin>>t;
	while(t--)
	{
	   long int l,k,n;
	   cin>>n>>k>>l;
	   
	   long int arr[n];
	   for(long int i=0;i<n;i++)
	   cin>>arr[i];
	   
	   sort(arr,arr+n);
	   
	   long int sum=0;
	   for(long int i=n-l;i>=0;i-=k)
	   {
	       sum = sum + arr[i];
	   }
	   
	   cout<<sum<<endl;
	}
	return 0;
}

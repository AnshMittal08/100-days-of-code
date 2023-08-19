#include <iostream>
using namespace std;

int main() {
	int n;
	cin>>n;
	
	int arr[n];
	int sum=0;
	int count=0;
	for(int i=0;i<n;i++)
	{
	    cin>>arr[i];
	    count+=i+1;
	    sum+=arr[i];
	}
	
	if(sum==count)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	
	return 0;
}

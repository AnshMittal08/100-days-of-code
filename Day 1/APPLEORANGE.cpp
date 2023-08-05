#include <bits/stdc++.h>
#include<algorithm>
using namespace std;

int findGCD(int a, int b) {
    if (b == 0) {
        return a;
    }
    return findGCD(b, a % b);
}


int main() {
	 int t;
	 cin>>t;
	 while(t--)
	 {
	     int n,m;
	     cin>>n>>m;
	     
	         int count=findGCD(n,m);
	         cout<<count<<endl;
	 }
	return 0;
}

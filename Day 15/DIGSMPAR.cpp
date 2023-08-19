#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        int a = n;
        int digitsum = 0;
        int ans = n;
        
         while(a>0) {
            if (a%10 == 9) digitsum++;
            else break;
            a /= 10;
        }
        cout<< (digitsum%2 == 0 ? n+1 : n+2) <<endl;
	  
    }
    
    return 0;
}

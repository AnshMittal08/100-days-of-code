#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin>>t;
    
    while(t--){
        int n;
        cin>>n;
        long long int p[n];

        for(int i = 0;i<n;i++){
            cin>>p[i];
        }
        sort(p,p+n);
         for(int i = n-1;i>=0;i--){
            if(i == n-1){
                continue;
            }
            else{
                p[i] = p[i] + p[i+1];
                 
            }
         }
         for(int i = 0;i<n;i++){
            
            cout<<p[i]<<" ";
            if(i == n-1){
                cout<<"\n";
            }
         }
          
    }
}
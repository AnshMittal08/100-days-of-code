#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int br,mg,rm,ei;

        for (int i = 0; i < 4; i++) {
            string s;
            cin>>s;
            
            if(s == "Barcelona") cin>>br;
            else if(s == "Malaga") cin>>mg;
            else if(s == "RealMadrid") cin>>rm;
            else if(s == "Eibar") cin>>ei;
        }
        
        if(br>ei && rm<mg)
        cout<<"Barcelona"<<endl;
        else
        cout<<"RealMadrid"<<endl;
    }
    return 0;
}

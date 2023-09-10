#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int Pc,Pr;
	    cin>>Pc>>Pr;
	    int Pc_digit,Pr_digit;
	    
	    if(Pc%9==0)
	    Pc_digit = Pc/9;
	    else
	    Pc_digit = (Pc/9)+1;
	    
	    if(Pr%9==0)
	    Pr_digit = Pr/9;
	    else
	    Pr_digit = (Pr/9)+1;
	    
	    if(Pr_digit == Pc_digit)
	    cout<<1<<" "<<Pc_digit<<endl;
	    else if(Pr_digit<Pc_digit)
	    cout<<1<<" "<<Pr_digit<<endl;
	    else
	    cout<<0<<" "<<Pc_digit<<endl;
	    
	}
	return 0;
}

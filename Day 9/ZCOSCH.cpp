#include <iostream>
using namespace std;

int main() {
	int rank;
	cin>>rank;
	
	if(rank>=0 && rank<=100)
	cout<<(rank<51?100:50)<<endl;
	else
	cout<<0<<endl;
	return 0;
}

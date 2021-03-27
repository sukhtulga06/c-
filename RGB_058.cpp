#include <iostream>
//tsipriin_davtalt
using namespace std;

int main(){
	
	int a,b;
	cin>>a>>b;
	int d=0;
	int e=0;
	while(a>=1)
	{
	d=(a%10);
	if(b==d)
	{
	e=(e+1);
	}
	a=(a/10);
	}
	cout<<e;
	return 0;
}

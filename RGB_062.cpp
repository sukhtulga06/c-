#include<iostream>
//palindrom_eseh
using namespace std;

int main(){
	int n,t,r,v=0;
	cin>>n;
	t=n;
	while(t>0)
	{
	r=t%10;
	t=t/10;
	v=v*10+r;
	}
	if(n==v) cout<<"YES"<<endl;
	else cout<<"NO";
	return 0;
}

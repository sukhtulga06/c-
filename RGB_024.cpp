#include<iostream>
//urjver_5
using namespace std;

int main(){

	int a,b,c,d,s=1;
	cin>>a>>b>>c>>d;
	if(a<5) s=s*a;
	else if(a>5) s=s+0;
	if(b<5) s=s*b;
	else if(b>5) s=s+0;
	if(c<5) s=s*c;
	else if(c>5) s=s+0;
	if(d<5) s=s*d;
	else if(d>5) s=s+0;
	cout<<s;
	return 0;
}

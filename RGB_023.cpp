#include<iostream>
//niilber_80
using namespace std;

int main(){
	
	int x,y,z,s,n=0;
	cin>>x>>y>>z>>s;
	if(x>80) n=n+x;
	else if(x<80) x=x+0;
	if(y>80) n=n+y;
	else if(y<80) n=n+0;
	if(z>80) n=n+z;
	else if(z<80) n=n+0;
	if(s>80) n=n+s;
	else if(s<80) n=n+0;
	cout<<n;
	return 0;
}

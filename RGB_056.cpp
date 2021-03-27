#include<iostream>
//tegsh_tsipruudiin_niilber
using namespace std;

int main(){
	
	int a,b,c;
	cin>>a;
	b=0;
	while(a>0)
	{
	c=a%10;
	if(c%2==0)b+=c;
	a/=10;
	}
	cout<<b;
	return 0;
}

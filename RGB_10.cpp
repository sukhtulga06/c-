#include<iostream>
//3_orontoi_too
using namespace std;

int main(){
	
	int a,b,c,d,e;
	cin>>a;
	b=a/100;
	c=a/10%10;
	d=a%10;
	e=b+c+d;
	cout<<e<<endl;
	return 0;
}

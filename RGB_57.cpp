#include<iostream>
//sondgoi_tsipruudiin_too
using namespace std;

int main(){
	
	int a,b,c,d,e,f;
	d=0;
	cin>>a;
	while(a>0){
	b=a%10;
	a=a-b;
	a=a/10;
	if(b%2==1){
	d++;
	}
	}
	cout<<d;
	return 0;
}

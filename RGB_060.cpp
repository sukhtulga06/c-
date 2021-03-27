#include <iostream>
//toon_dahi_baga_tsipr
using namespace std;

int main(){
	
	int x,s,a,b;
	cin>>x;
	s=9;
	while(x>0){
	a=x%10;
	if(s>a){
	s=a;
	}
	x=x/10;
	}
	cout<<s;
	return 0;
}

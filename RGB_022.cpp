#include<iostream>
//4_toonii_baga
using namespace std;

int main(){
	
	int x,y,z,s;
	cin>>x>>y>>z>>s;
	if(x>y && x>z && x>s){
		cout<<x;
	}else if(y>x && y>z && y>s){
		cout<<y;
	}else if(z>s && z>y && z>x){
		cout<<z;
	}else if(s>z && s>y && s>x){
		cout<<s;
	}
	return 0;
}

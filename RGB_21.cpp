#include<iostream>
//3_toonii_ih
using namespace std;

int main(){
	
	int x,y,z;
	cin>>x>>y>>z;
	if(x>y && x>z){
		cout<<x;
	}else if(y>z){
		cout<<y;
	}else cout<<z;
	return 0;
}


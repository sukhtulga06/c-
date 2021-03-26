#include<iostream>
//n!
using namespace std;

int main(){
	int x,y=1,i;
	cin>>x;
	for(i=1;i<=x;i++){
	y=y*i;
	}
	cout<<y;
	return 0;
}

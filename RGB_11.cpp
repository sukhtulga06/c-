#include<iostream>
//minut_sekund
using namespace std;

int main(){
	
	int x,y,z;
	cin>>x;
	y=x/60;
	z=x-x/60*60;
	cout<<y<<" "<<z;
	return 0;
}

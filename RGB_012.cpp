#include<iostream>
//tsag_minut_sekund
using namespace std;

int main(){
	
	int x,y,z,s;
	cin>>x;
	y=x/3600;
	z=x/60%60;
	s=x-x/60*60;
	cout<<y<<" "<<z<<" "<<s;
	return 0;
}

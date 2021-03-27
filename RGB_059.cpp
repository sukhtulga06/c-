#include<iostream>
//toon_dahi_ih_tsipr
using namespace std;

int main(){
	
	int n,s,i;
	cin>>n;
	s=0;
	for(int i;n>0;i=1){
	if(s<n%10)
	s=n%10;
	n=n/10;
	}
	cout<<s;
	return 0;
}

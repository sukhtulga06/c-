#include <iostream>
//toonii_paktorial
using namespace std;

int main(){

	int n, s = 1, i = 0;
	cin >> n;
	if ( n == 1 ) {
	cout << 1;
	}else{
	while( n > s ) {
	i++;
	s=s*i;
	}
	if(n==s){
	cout<<i;
	}else{
	cout<<"No";
	}
	}
	return 0;
}

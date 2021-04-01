#include <iostream>
//2iin_zeregt
using namespace std;

int main(){

	int a;
	cin>>a;
	while (a>=2 && a%2==0){
	a=a/2;
	}
	if (a==1){
	cout<<"YES"<<endl;
	}
	else cout<<"NO";
	return 0;
}

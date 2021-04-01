#include <iostream>
//tongorogson_too
using namespace std;

int main(){

	int a,b,s=0;
	cin>>a;
	while(a>0){
	b=a%10;
	a=a/10;
	s=s*10+b;}
	cout<<s;
	return 0;
}

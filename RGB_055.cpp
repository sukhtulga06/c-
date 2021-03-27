#include<iostream>
//tsipruudiin_niilber
using namespace std;

int main(){
	int a;
	cin>>a;
	int g=0;
	int h;
	while(a>0)
	{
	h=(a%10);
	g=(g+h);
	a=(a/10);
	}
	cout<<g;
	return 0;
}
	

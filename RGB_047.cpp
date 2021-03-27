#include <iostream>
//toonii_zergiin_hurd
using namespace std;

main (){

	int a,n,i=1,p=1;
	cin>>a>>n;
	while(i<=n)
	{
	p=p*a;
	cout<<a<<"^"<<i<<"="<<p<<endl;
	i++;
	}
	return 0;
} 

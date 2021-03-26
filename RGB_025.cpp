#include<iostream>
//tegsh_toonuudiin_niilber
using namespace std;

int main(){
	
	int x,y,z,s=0;
	cin>>x>>y>>z;
	if(x%2==0){ s=s+x;
	} 
	if(y%2==0){ s=s+y;
	}
	if(z%2==0){ s=s+z;
	}
	cout<<s;
	return 0;
}

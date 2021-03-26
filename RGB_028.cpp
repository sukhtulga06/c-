#include<iostream>
//3t_huvaagdah
using namespace std;

int main(){
	
	int x,y,z,s,g=0;
	cin>>x>>y>>z>>s;
	if(x%3==0){ g=g+1;
	}
	if(y%3==0){ g=g+1;
	}
	if(z%3==0){ g=g+1;
	}
	if(s%3==0){ g=g+1;
	}
	cout<<g;
	return 0;
}

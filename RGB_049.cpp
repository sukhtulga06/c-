#include<iostream>
//davhriin_hed_deh_haalga
using namespace std;

int main(){
	int floor,fdoor,no;
	int ff,fd;
	cin>>floor>>fdoor>>no;
	
	if(no%fdoor!=0){
		ff=no/fdoor+1;
	}else{
		ff=no/fdoor;
	}
	
	
	if(no%fdoor==0){
		fd=fdoor;
	}else{
		fd=no%fdoor;
	}
	cout<<ff<<" "<<fd;
	return 0;
}

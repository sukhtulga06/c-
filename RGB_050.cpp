#include<iostream>
//orts_davhar_haalga
using namespace std;

int main(){
	int floor,orts,fdoor,no;
	int ff,fo,fd;
	cin>>floor>>orts>>fdoor>>no;
	if(no%(floor*fdoor)==0){
		fo=no/(floor*fdoor);
	}else{
		fo=no/(floor*fdoor)+1;
	}
	no=no-(fo-1)*(fdoor*floor);
	if(no%fdoor!=0){
		ff=no/fdoor+1;
	}else{
		ff=no/fdoor;
	}
	if(no%fdoor!=0){
		fd=no%fdoor;
	}else{
		fd=fdoor;
	}
	cout<<fo<<" "<<ff<<" "<<fd;
	
	return 0;
}

#include<iostream>
//toon_unelgeenees_usgend
using namespace std;

int main(){
	
	int x;
	cin>>x;
	if(x>89 && x<=100){
		cout<<"A";
	}else if(x>79 && x<=89){
		cout<<"B";
	}else if(x>69 && x<=79){
		cout<<"C";
	}else if(x>59 && x<=69){
		cout<<"D";
	}else if(x>0 && x<=59){
		cout<<"F";
	}
	return 0;
}

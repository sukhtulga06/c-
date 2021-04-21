#include<iostream>

double functionA(double, double);
double functionB(double, double);
double functionC(double, double);
double functionD(double, double);
double functionE(double);
int functionF(int);

using namespace std;

int main(){
	double x,y,equal;
	int d;
	char c;
	while(c!='q'){
	cin>>x>>y>>c;
		if(c =='+'){
			equal=functionA(x,y);
			cout<<x<<"+"<<y<<"="<<equal;
		}
		if(c =='-'){
			equal=functionB(x,y);
			cout<<x<<"-"<<y<<"="<<equal;
		}
		if(c =='*'){
			equal=functionC(x,y);
			cout<<x<<"*"<<y<<"="<<equal;
		}
		if(c =='/'){
			equal=functionD(x,y);
			cout<<x<<"/"<<y<<"="<<equal;	
		}
	}
	return 0;
}

double functionA(double a, double b){
	double i;
	i=a+b;
	return i;
}

double functionB(double a, double b){
	double i;
	i=a-b;
	return i;
}

double functionC(double a, double b){
	double i;
	i=a*b;
	return i;
}

double functionD(double a, double b){
	double i;
	i=a/b;
	return i;
}
int functionF(int a){
	int i,c=0;
	for(int i=1; i<=a; i++){
		if(c==a%i && a==i*i){
			return i;
		}
	}
}

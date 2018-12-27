// Direct and uniform initialization

#include<iostream>
using namespace std;

int main(){
	int a = 5;		//classic assignment
	int b(3);		//direct initialization
	int c{4};		//uniform initialization
	int d(6), e(7);	//direct w/ several variables
	
	cout<<a<<endl<<b<<endl<<c<<endl<<d<<"\n"<<e<<"\n";
	
}

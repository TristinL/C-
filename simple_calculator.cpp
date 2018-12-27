//	Chapter 2 quiz

// simple calculator
#include<iostream>
using namespace std;
int main(){
	double x, y;
	cout<<"Enter two numbers: ";
	cin>>x>>y;
	
	cout<<"Enter a symbol (+, -, *, /): ";
	char symbol;
	cin>>symbol;
	
	if(symbol == '+'){
		cout<< x+y<< endl;
	}
	else if(symbol == '-'){
		cout<< x-y<< endl;
	}
	else if(symbol == '*'){
		cout<< x*y<< endl;
	}
	else if(symbol == '/'){
		cout<< x/y<< endl;
	}
	else{
		return 0;
	}
}

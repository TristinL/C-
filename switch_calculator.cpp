// Lets make a switch statement

#include<iostream>
using namespace std;
void calculate(int a, int b, char c);

int main(){
	int a, b;			//define
	char c;				//variables
	
	cout<<"Enter two whole numbers:"<<endl;		//obtain data from user
	cin>>a>>b;
	
	cout<<"What kind of math operation would you like done? +, -, *, /, or %"<<endl;	//Obtain operator from user
	cin>>c;
	
	calculate(a, b, c);		//run calculate function
}

void calculate(int a, int b, char c){	//calculate function
	switch(c){							//switch statement
		case '+':
			cout<<a+b<<endl;
			break;
		case '-':
			cout<<a-b<<endl;
			break;
		case '*':
			cout<<a*b<<endl;
			break;
		case '/':
			cout<<(a/b)<<endl;
			break;
		case '%':
			cout<<(a%b)<<endl;
			break;
		default:
			cout<<"Unkown operation entered"<<endl;
			break;
	}
}

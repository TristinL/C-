// Double integer function

#include<iostream>

int doublenumber (int);

int main(){
	int x;
	std::cout<<"Enter a number: ";
	std::cin>>x;
	
	doublenumber(x);
}

int doublenumber(int a){
	a = a*2;
	std::cout<<a<<std::endl;
}

#include<iostream>

int doIt(int x){
	x=3;
	int y=4;
	std::cout<<"doIt: x= "<<x<<" y= "<<y<< std::endl;
	return x, y;
}


int main(){
	int x=1;
	int y=2;
	std::cout<<"main: x= "<<x<<" y= "<<y<<std::endl;
	doIt(x);
	std::cout<<"new main: x= "<<x<<" y= "<<y<<std::endl;
}

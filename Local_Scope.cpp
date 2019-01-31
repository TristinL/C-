// This is a simple program used to remind me of what local scope is for the day when I lose my mind and can't remember

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
	
	std::cout<<"main: x= "<<x<<" y= "<<y<<std::endl;		//In local scope
	
	doIt(x);							//pass x to doIt() function
	
	std::cout<<"new main: x= "<<x<<" y= "<<y<<std::endl;		//print out new main/local variables x and y
}

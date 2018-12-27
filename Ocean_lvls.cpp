#include<iostream>

int main(){
	for (int c=1; c < 26; c++){
		std::cout<<"----------------------------------------"<<std::endl;
		std::cout<<"year "<<c<<": water level at +"<<(c*3.1)<<" milimeters"<<std::endl;
	}
}

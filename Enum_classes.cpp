//Enum Classes

#include<iostream>

int main(){
	enum class Cars{
		MUSTANG;
		CORVETTE;
		TESLA;
	};
	
	enum class Numbers{
		25;
		56;
		77;
	};
	
	Cars Car = MUSTANG;
	Numbers Number = 77;
	
	if (Car == Number){
		std::cout<<"Car and Number are the same"<<endl;
	}
}

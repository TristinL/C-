// This program highlights different ways to initialize arrays.

#include<iostream>

int main(){
	int prime[5]; 				//This array has a data type of int, a name of "prime"
						//and has five reserved spots
	prime[0] = 2;
	
	prime[1] = 3;
	
	prime[2] = 5;
	
	prime[3] = 7;
	
	prime[4] = 11;				//Initializing this way is a pain
					
	int prime_2[5] = {2, 3, 5, 7, 11};	//Initialized using an initializer list
	
	int prime_3[5] {2, 3, 5, 7, 11};	//Uniform initialization
	
//	*---------------------------------------------------------------------------------------------------*
	std::cout<<prime[0]<<" "<<prime[1]<<" "<<prime[2]<<" "<<prime[3]<<" "<<prime[4]<<std::endl;
	
	std::cout<<prime_2[0]<<" "<<prime_2[1]<<" "<<prime_2[2]<<" "<<prime_2[3]<<" "<<prime_2[4]<<std::endl;
	
	std::cout<<prime_3[0]<<" "<<prime_3[1]<<" "<<prime_3[2]<<" "<<prime_3[3]<<" "<<prime_3[4]<<std::endl;
//	^----------------------------------------------------------------------------------------------------^
	//Several Print statements, writen out the long way so as to avoid confusion
}

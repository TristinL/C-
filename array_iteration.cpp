// Now lets iterate through an array

#include<iostream>

int main(){
	int fibinacci[] {1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89};
	
	const int length = (sizeof(fibinacci) / sizeof(fibinacci[0]));
	int total_num = 0;
	
		//Use a loop to calculate total
	for (int num = 0; num < length; ++num){
		total_num += fibinacci[num];
		std::cout<<fibinacci[num]<<" ";
	}
	std::cout<<std::endl<<total_num;
}

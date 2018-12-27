#include<iostream>

int multiplynumb(int r){
	r = r*4;
	return r;
}

int main(){
	std::cout << "Enter a number: ";
	int x;
	std::cin >> x;
	std::cout << multiplynumb(x) << std::endl;
}

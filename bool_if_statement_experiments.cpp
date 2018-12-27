#include<iostream>


using namespace std;
// returns true if x and y are equal, false otherwise
bool isEqual(int x, int y){
	return (x==y);		// operator == returns true if x equals y, and false otherwise
}


int main(){
	cout<< "Enter an integer: ";
	int x;
	cin>> x;
	
	cout<< "Enter another integer: ";
	int y;
	cin>> y;
	
	if(isEqual(x, y)){
		cout<< x << " and "<< y << " are equal"<< endl;
	}
	else{
		cout<< x << " and "<< y<< " are not equal"<< endl;
	}
	
	return 0;
}

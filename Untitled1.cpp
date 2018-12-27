//Tristin Lehman
//Chapter 7, p.219, problem 7.3: Lotto Numbers

//This program will read a file containing random lottory numbers between 1 and 99.
//It will then check each number against an array and determine if each possible number
//from 1 to 99 was present in the file.

#include<iostream>
using namespace std;

int main(){
	bool isCovered[99];
	int number;
	
	for (int i = 0; i < 99; i++){
		isCovered[i] = false;
	}
	cin>>number;
	while(number != 0){
		isCovered[number - 1] = true;
		cin>>number;
	}
	bool allCovered = true;
	for(int i = 0; i < 99; i++){
		if (!isCovered[i])
		{
			allCovered = false;
			break;
		}
	}
	if(allCovered){
		cout<<"The tickets cover all numbers"<<endl;
	}
	else{
		cout<<"The tickets don't cover all numbers"<<endl;
	}
	return 0;
}

//This program does not work

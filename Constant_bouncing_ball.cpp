// Chapter 2 quiz #4
// This program calculates the distance a ball has dropped after 0, 1, 2, 3, 4, and 5 seconds; displaying the output as the ball's distance above the ground. It excludes the idea that the ball will bounce.

#include<iostream>
#include "Constants.h"

using namespace std;

void ballHeight(int time, int height){
	float distanceFallen = myConstants::my_gravity * time * time / 2;
	
	if(distanceFallen > height){
		cout<< "The ball is on the ground"<< endl;
	}
	else{
		cout<< "At "<< time<< " seconds, the ball is at height: "<< height - distanceFallen<< endl;
	}
}


int main(){
	cout<< "Enter the initial height of the tower in meters: "<<endl;
	int height_initial;
	cin>> height_initial;
	
	
	ballHeight(0, height_initial);
	ballHeight(1, height_initial);
	ballHeight(2, height_initial);
	ballHeight(3, height_initial);
	ballHeight(4, height_initial);
	ballHeight(5, height_initial);
	
}

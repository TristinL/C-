// This program calculates the distance a ball has dropped after 0, 1, 2, 3, 4, and 5 seconds;
// displaying the output as the ball's distance above the ground. It excludes the idea that the ball will bounce.

#include<iostream>
#include "Constants.h"

using namespace std;

void ballHeight(int time, int height){
	
	if((myConstants::my_gravity * time * time / 2) >= height){			//Determine distance fallen by eqn:
											//(gt^2)/2. If it is >= the height of
		cout<< "The ball is on the ground"<< endl;				//the tower, the ball is on the ground
	}
	else{
											//Else the ball is at a height above the
		cout<< "At "<< time<< " seconds, the ball is at height: "		//ground equal to the height of the tower
			<< height - (myConstants::my_gravity * time * time / 2)<< endl;	//minus the distance fallen
	}
}											//As a way to reduce memory cost I removed
											//variable distance_fallen and replaced w/
int main(){										//Eqn used to determine that value.
	
	cout<< "Enter the initial height of the tower in meters: "<<endl;
											//Gather height of tower from user
	int height_initial;
	
	cin>> height_initial;
	
	for(int i = 0; i > 6; i++){							//Run the ballHeight function five times
											//Removed six explicit calls for a loop
		ballHeight(i, height_initial)
			
	}	
}

//Tristin Lehman

//Double negatives and reverse logic operations

#include<iostream>
using namespace std;
bool reverseLogicBall(bool ball);

int main(){
	bool ball = false;
	
	if(ball == true){										//asking "did the ball go through the basket"
		cout<<"The ball did go through the basket"<<endl;
	}
	else{
		cout<<"The ball did not go through the basket"<<endl;
	}
		
	reverseLogicBall(ball);
}

bool reverseLogicBall(bool ball){
	if(ball == true)											//asking "did the ball not go through the basket"
		cout<<"The ball did not go through the basket"<<endl;
	else
		cout<<"The ball did go through the basket"<<endl;
}

//The problem with Mark-up

#include<iostream>

float calculateRetail(float wholesale, float markup);
using namespace std;
int main(){
	float wholesale;
	float markup;
	
	cout<<"Enter the wholesale cost and markup\n";
	cout<<"for an item. Enter -1 for the markup\n";
	cout<<"when finished\n";
	
	while (wholesale != -1){
		cout<<"Enter the wholesale price of the item:"<<endl;
		cin>>wholesale;
		cout<<"Enter the markup for the item or -1 to quit: ";
		cin>>markup;
		if(markup == -1){
			cout<<"Thank you"<<endl;
			return 0;
		}
		else{
			float retail = calculateRetail(wholesale, markup);
			cout<<"The retail price of this item is: "<<retail<<endl;
		}
	}
}


float calculateRetail(float wholesale, float markup){
	float retail_cost = wholesale + (wholesale * (markup / 100));
	return retail_cost;
}

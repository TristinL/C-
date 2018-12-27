#include<iostream>
#define SIZE 6
using namespace std;

int main(){
	int s[SIZE] = {1, 3, 7, 6, 5, 8};
	for (int k = 0; k < SIZE; k++){
		cout<<s[k]<<endl<<endl;
	}	
	cout<<endl<<endl;
	for (int i = 0; i < SIZE -2; i++){
		int minIndex = i;
		int minValue = s[i];
		
		for (int j = i+1; j < SIZE -1; j++){
			if (s[j] < minValue){
				minValue = s[j];
				minIndex = j;
				int temp = s[minIndex];
			s[minIndex] = s[i];
			s[i] = temp;
			
			for (int k = 0; k < SIZE; k++){
				cout<<s[k]<<endl<<endl;
				}	
			}
			else{
			}
			
		}
		
	}
	
	for (int k = 0; k < SIZE; k++){
		cout<<s[k]<<endl;
	}
}

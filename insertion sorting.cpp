#include<iostream>
#define SIZE 6
using namespace std;

int main(){
	int s[SIZE] = {1, 3, 7, 6, 5, 8};
	
	
	for (int k = 0; k < SIZE; k++){
		cout<<s[k]<<endl<<endl;
	}
	
		
	cout<<endl<<endl;
	
	
	
	for (int i = 0; i < SIZE - 1; i++){
		int unsorted = s[i];
		int scan = i;
		
		while(scan > 0 && s[scan - 1] > unsorted){
			s[scan] = s[scan - 1];
			scan = scan - 1;
			s[scan] = unsorted;
		}
	}
	
	for (int k = 0; k < SIZE; k++){
		cout<<s[k]<<endl;
	}
}

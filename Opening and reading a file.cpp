//This program demonstrates reading and writing a
//file through an fstream object.

#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	fstream inOutFile;
	string word;			//used to read a word from the file
	int number_of_words = 0	;
	
	//open the file
	inOutFile.open("inout.txt");
	if(inOutFile.fail()){
		cout<<"The file was not found."<<endl;
		return 1;
	}
	
	//Read and print every word already in the file
	while(inOutFile >> word){
		cout<<word<<endl;
		number_of_words += 1;
	}
	
	//Clear end of file flag to allow additional file operations
	inOutFile.clear();
	
	//Write a word to the file and close the file
	inOutFile<<"Hello!"<<endl;
	inOutFile.close();
	
	cout<<number_of_words<<endl;
	return 0;
}

//This program writes user input to a file
#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	ofstream outputFile;
	string name;
	
	//open the output file
	outputFile.open("Friends.txt");
	
	//use a loop to get the names of three friends
	//and write each name in the output file.
	cout<<"Enter the names of three friends. \n";
	
	for(int count = 1; count <= 3; count++){
		cout<<"Friend #"<<count<<": ";
		cin>>name;
		outputFile<<name<<endl;
	}
	
	//close the file
	outputFile.close();
	
	cout<<"The names were saved to a file. \n";
	return 0;
}

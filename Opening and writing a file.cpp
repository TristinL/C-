//This program writes data to a file
#include<iostream>
#include<fstream>		//needed to use files
using namespace std;

int main(){
	ofstream outputFile;
	
	//open the output file
	outputFile.open("demofile.txt");
	
	cout<<"Now writing data to the file. \n";
	
	//write four names to the file
	outputFile<<"Bach\n";
	outputFile<<"Beethoven\n";
	outputFile<<"Mozart\n";
	outputFile<<"Schubert\n";
	
	//close the file
	outputFile.close();
	
	cout<<"Done. \n";
	return 0;
}

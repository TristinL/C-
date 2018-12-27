//This program reads and sums the numeric values stored in a file.
//It reads until the end of the file (EOF) is reached.
#include<iostream>
#include<string>
#include<fstream>
using namespace std;

int main(){
	ifstream inputFile;	//File stream object
	string fileName;	//holds the user-entered file name
	int numValues = 0;	//counts the number of values read
	double value,		//a single value read
			total = 0.0;	//Accumulator
			
	//Prompt the user to enter the data file name.
	cout<<"This program reads and sums the values in a data file. \n";
	cout<<"Enter the name of the file to read from: ";
	cin>>fileName;
	
	//open the input file
	inputFile.open(fileName);
	
	//Loop until the EOF is reached
	while(inputFile >> value){		//If a value was read, excute the
		numValues++;				//loop again to count the value and
		total += value;				//add it to the total
	}
	cout<<"\nThe total of the "<<numValues<<" values is "
		<<total<<endl;
		
	//close the file
	inputFile.close();
	return 0;
}

//Dev C++ does not seem to be able to handle having a string object variable as an arguement in the inputFile.open function.
//This was solved by adding "-std=c++11" to the compiler options.

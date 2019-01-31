//This program demonstrates Windows functions to print colored
//text. It displays "Hello World!" in 16 different colors.

#include<iostream>
#include<windows.h>
using namespace std;

int main(){
	
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);	//create a handle to the computer screen.
	
	for (int color = 0; color < 16; color++){		//write 16 lines in 16 different colors
		
		SetConsoleTextAttribute(screen, color);

		cout<< "Hello World!"<<endl;
		
		Sleep(400);					//pause between lines to see them appear
	}
	
	SetConsoleTextAttribute(screen, 7);			//Restore the normal text color
	
	return 0;
}

//Monthly Budget Screen Form
//P.503 #11

#include<iostream>
#include<windows.h>		//needed to set cursor positions
#include<string>
using namespace std;

struct MonthlyBudget{
	double housing;
	double utilities;
	double householdExpenses;
	double transportation;
	double food;
	double medical;
	double insurance;
	double entertainment;
	double clothing;
	double misc;
};

void placeCursor(HANDLE, int, int);		//function prototypes
void displayBasePrompts(HANDLE, MonthlyBudget);
void displayPrompts(HANDLE);
void getUserInput(HANDLE, MonthlyBudget&);
void displayData(HANDLE, MonthlyBudget);
void calculateOverUnderBudget(MonthlyBudget, MonthlyBudget);

int main(){
	MonthlyBudget base;
	base.housing = 500.00;
	base.utilities = 150.00;
	base.householdExpenses = 65.00;
	base.transportation = 50.00;
	base.food = 250.00;
	base.medical = 30.00;
	base.insurance = 100.00;
	base.entertainment = 150.00;
	base.clothing = 75.00;
	base.misc = 50.00;
	MonthlyBudget input;
	
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);
	
	displayBasePrompts(screen, base);
	displayPrompts(screen);
	getUserInput(screen, input);
	calculateOverUnderBudget(base, input);
	
}




/*****************************************************
*						placeCursor				*
*****************************************************/
void placeCursor(HANDLE screen, int row, int col){
	COORD position;									//COORD is a defined C++ structure that
	position.Y = row;								//holds a pair of X and Y coordinates
	position.X = col;
	SetConsoleCursorPosition(screen, position);
}

/*****************************************************
*						displayBasePrompts				*
*****************************************************/
void displayBasePrompts(HANDLE screen, MonthlyBudget base){
	placeCursor(screen, 3, 25);
	cout<<"******* Data Entry Form *******"<<endl;
	placeCursor(screen, 4, 0);
	cout<<"______________________________________________________________________"<<endl;
	placeCursor(screen, 6, 10);
	cout<<"base Housing|$"<<base.housing<<endl;
	placeCursor(screen, 8, 10);
	cout<<"base Utilities|$"<<base.utilities<<endl;
	placeCursor(screen, 10, 10);
	cout<<"base House exp|$"<<base.householdExpenses<<endl;
	placeCursor(screen, 12, 10);
	cout<<"base Transport|$"<<base.transportation<<endl;
	placeCursor(screen, 14, 10);
	cout<<"base Food|$"<<base.food<<endl;
	placeCursor(screen, 16, 10);
	cout<<"base Medical|$"<<base.medical<<endl;
	placeCursor(screen, 18, 10);
	cout<<"base Insurance|$"<<base.insurance<<endl;
	placeCursor(screen, 20, 10);
	cout<<"base Entertain|$"<<base.entertainment<<endl;
	placeCursor(screen, 22, 10);
	cout<<"base Clothing|$"<<base.clothing<<endl;
	placeCursor(screen, 24, 10);
	cout<<"base Misc|$"<<base.misc<<endl;
}
/*****************************************************
						displayPrompts
*****************************************************/
void displayPrompts(HANDLE screen){
	placeCursor(screen, 6, 45);
	cout<<"|your Housing|$ "<<endl;
	placeCursor(screen, 8, 45);
	cout<<"|your Utilities|$ "<<endl;
	placeCursor(screen, 10, 45);
	cout<<"|your House exp|$ "<<endl;
	placeCursor(screen, 12, 45);
	cout<<"|your Transport|$ "<<endl;
	placeCursor(screen, 14, 45);
	cout<<"|your Food|$ "<<endl;
	placeCursor(screen, 16, 45);
	cout<<"|your Medical|$ "<<endl;
	placeCursor(screen, 18, 45);
	cout<<"|your Insurance|$ "<<endl;
	placeCursor(screen, 20, 45);
	cout<<"|your Entertain|$ "<<endl;
	placeCursor(screen, 22, 45);
	cout<<"|your Clothing|$ "<<endl;
	placeCursor(screen, 24, 45);
	cout<<"|your Misc|$ "<<endl;
}

/*****************************************************
*						getUserInput				*
*****************************************************/
void getUserInput(HANDLE screen, MonthlyBudget &input){
	placeCursor(screen, 6, 61);
	cin>>input.housing;
	placeCursor(screen, 8, 63);
	cin>>input.utilities;
	placeCursor(screen, 10, 63);
	cin>>input.householdExpenses;
	placeCursor(screen, 12, 63);
	cin>>input.transportation;
	placeCursor(screen, 14, 58);
	cin>>input.food;
	placeCursor(screen, 16, 61);
	cin>>input.medical;
	placeCursor(screen, 18, 63);
	cin>>input.insurance;
	placeCursor(screen, 20, 63);
	cin>>input.entertainment;
	placeCursor(screen, 22, 62);
	cin>>input.clothing;
	placeCursor(screen, 24, 58);
	cin>>input.misc;
}
void calculateOverUnderBudget(MonthlyBudget base, MonthlyBudget input){
	double housing = base.housing-input.housing;
	double utilities = base.utilities-input.utilities;
	double householdExpenses = base.householdExpenses-input.householdExpenses;
	double transportation = base.transportation-input.transportation;
	double food = base.food-input.food;
	double medical = base.medical-input.medical;
	double insurance = base.insurance-input.insurance;
	double entertainment = base.entertainment-input.entertainment;
	double clothing = base.clothing-input.clothing;
	double misc = base.misc-input.misc;
	
	double baseTotal = 1420;
	double inputTotal = input.clothing + input.entertainment+input.food+input.householdExpenses+input.housing+input.insurance+input.medical
	+input.misc+input.transportation+input.utilities;
	
	cout<<"housing: "<<housing<<endl;
	cout<<"utilities: "<<utilities<<endl;
	cout<<"household expenses: "<<householdExpenses<<endl;
	cout<<"transportation: "<<transportation<<endl;
	cout<<"food: "<<food<<endl;
	cout<<"medical: "<<medical<<endl;
	cout<<"insurance: "<<insurance<<endl;
	cout<<"entertainment: "<<entertainment<<endl;
	cout<<"clothing: "<<clothing<<endl;
	cout<<"miscellaneous: "<<misc<<endl;
	cout<<"Monthly Total: "<<baseTotal-inputTotal<<endl;
}



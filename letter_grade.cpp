// This program uses a loop to compute letter grades for multiple students.
#include<iostream>
using namespace std;

int main(){
	// create constants to hold letter grade numeric equivalent.
	const int MIN_A_SCORE = 90,
			MIN_B_SCORE = 80,
			MIN_C_SCORE = 70,
			MIN_D_SCORE = 60,
			MIN_POSSIBLE_SCORE = 0;
			
	int numStudents,			//The total number of students
		student,				//The current student being processesed
		testScore;				//Current student's numeric test score
	char grade;					//current student's letter grade
	bool goodScore = true;
	
	//get the number of students
	cout<<"How many students do you have grades for? ";
	cin>>numStudents;
	
	//initialize the loop control variable
	student = 1;
	
	//loop once for each student
	while (student <= numStudents){
		cout<<"\nEnter the numeric test score for student #"
			<<student<<": ";
		cin>> testScore;
		//Determine letter grade
		if(testScore >= MIN_A_SCORE)
			grade = 'A';
		else if(testScore >= MIN_B_SCORE)
			grade = 'B';
		else if(testScore >= MIN_C_SCORE)
			grade = 'C';
		else if(testScore >= MIN_D_SCORE)
			grade = 'D';
		else if(testScore >= MIN_POSSIBLE_SCORE)
			grade = 'F';
		else
			goodScore = false;		//The score was below zero
			
		//Display letter grade
		if (goodScore)
			cout<<"The letter grade is "<<grade<<endl;
		else
			cout<<"The score cannot be below zero."<<endl;
		
		//set student to the next student
		student += 1;
	}
	
	return 0;
}

//void Calculate_Letter_Grade(int testScore){			//This function takes the numeric test score and RETURNS a letter grade or bool false
//	//Determine letter grade
//	char letterGrade;
//	if(testScore >= MIN_A_SCORE)
//		letterGrade = 'A';
//	else if(testScore >= MIN_B_SCORE)
//		letterGrade = 'B';
//	else if(testScore >= MIN_C_SCORE)
//		letterGrade = 'C';
//	else if(testScore >= MIN_D_SCORE)
//		letterGrade = 'D';
//	else if(testScore >= MIN_POSSIBLE_SCORE)
//		letterGrade = 'F';
//	else
//		goodScore = false
// }

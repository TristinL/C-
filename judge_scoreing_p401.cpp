//Tristin Lehman

#include<iostream>
using namespace std;

void getJudgeData(double &refVar);
double calcScore(double, double, double, double, double);
int findLowest(double, double, double, double, double);
int findHighest(double, double, double, double, double);


int main(){
	double score1, score2, score3, score4, score5;
	getJudgeData(score1);
	getJudgeData(score2);
	getJudgeData(score3);
	getJudgeData(score4);
	getJudgeData(score5);
	calcScore(score1, score2, score3, score4, score5);
}

void getJudgeData(double &refVar){
	cout<<"Enter the judge's score: ";
	cin>>refVar;
}

double calcScore(double score1, double score2, double score3, double score4, double score5){
	double lowest = findLowest(score1, score2, score3, score4, score5);
	double highest = findHighest(score1, score2, score3, score4, score5);
	double scoreTotal;
	
	double extremeScore = highest + lowest;
	scoreTotal =(score1 +score2 +score3 +score4 +score5) - extremeScore;
	cout<<highest<< " "<< lowest<<endl;
	
	double newScoreTotal = (scoreTotal/3);
	cout<<"your average score is: "<<newScoreTotal<<endl;
}

int findLowest(double score1, double score2, double score3, double score4, double score5){
	double low = 11.0;
	if(score1 < low)
		low = score1;
	if(score2 < low)
		low = score2;
	if(score3 < low)
		low = score3;
	if(score4 < low)
		low = score4;
	if (score5 < low)
		low = score5;
	return low;
}

int findHighest(double score1, double score2, double score3, double score4, double score5){
	double high = 0.0;
	if(score1 > high)
		high = score1;
	if(score2 > high)
		high = score2;
	if(score3 > high)
		high = score3;
	if(score4 > high)
		high = score4;
	if (score5 > high)
		high = score5;
	return high;
}






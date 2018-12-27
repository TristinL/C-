//

#include<iostream>
using namespace std;
void Select_word(int one);


int main(){
	int a, b, c, d;
	cout<<"enter four numbers (1-10): "<<endl;
	cin>>a>>b>>c>>d;
	
	Select_word(a);
	Select_word(b);
	Select_word(c);
	Select_word(d);
}

void Select_word(int one){
	if (one = 1){
		cout<<"hello"<<endl;}
	else if (one = 2){
		cout<<"how"<<endl;	}
	else if (one = 3){
		cout<<"are"<<endl;}
	else if (one = 4){
		cout<<"you"<<endl;}
	else if (one = 5){
		cout<<"doing"<<endl;}
	else if (one = 6){
		cout<<"this"<<endl;}
	else if (one = 7){
		cout<<"very"<<endl;}
	else if (one = 8){
		cout<<"hot"<<endl;}
	else if (one = 9){
		cout<<"sunny"<<endl;}
	else if (one = 10){
		cout<<"day"<<endl;}
	else{
		cout<<"invalid entry"<<endl;}
}

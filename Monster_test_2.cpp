#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int Change_CR_Stats(struct Monster name, struct Modify_monster New, int NewChallengeRating);
int Calc_modifier(int mod);

struct Monster{
	int intelligence;
	int charisma;
	int strength;
	int wisdom;
	int dextarity;
	int constitution;
	int AC;
	int HP;
	int speed;
	string damage_resistances;
	string damage_immunes;
	int CR;
	string size;
	string allignment;
	string condition_immunes;
	int numberOfDice;
	int typeOfDice;
};

struct Modify_monster{
	int intelligence;
	int charisma;
	int strength;
	int wisdom;
	int dextarity;
	int constitution;
	int AC;
	int HP;
	int speed;
	string damage_resistances;
	string damage_immunes;
	int CR;
	string size;
	string allignment;
	string condition_immunes;
	int numberOfDice;
	int typeOfDice;
};



int main(){
	
	string monster_name;
	cout<<"Enter the monster's name"<<endl;
	getline(cin, monster_name);
	
	Modify_monster New;
	Monster name;
	
	cout<<"intel: "<<endl;
	cin>>name.intelligence;
	
	cout<<"char: "<<endl;
	cin>>name.charisma;
	
	cout<<"str: "<<endl;
	cin>>name.strength;
	
	cout<<"wis: "<<endl;
	cin>>name.wisdom;
	
	cout<<"dex: "<<endl;
	cin>>name.dextarity;
	
	cout<<"con: "<<endl;
	cin>>name.constitution;
	
	cout<<"AC: "<<endl;
	cin>>name.AC;
	
	cout<<"HP: "<<endl;
	cin>>name.HP;
	
	cout<<"speed: "<<endl;
	cin>>name.speed;
	cin.ignore(32767, '\n');
	
	cout<<"damage resistances:"<<endl;
	getline(cin, name.damage_resistances);
	
	cout<<"damage immunities: "<<endl;
	getline(cin, name.damage_immunes);
	
	cout<<"CR: "<<endl;
	cin>>name.CR;
	cin.ignore(32767, '\n');
	
	cout<<"size: "<<endl;
	getline(cin, name.size);
	
	cout<<"allignment: "<<endl;
	getline(cin, name.allignment);
	
	cout<<"condition immunities: "<<endl;
	getline(cin, name.condition_immunes);
	
	cout<<"number of attack dice: "<<endl;
	cin>>name.numberOfDice;
	
	cout<<"type of attack dice: "<<endl;
	cin>>name.typeOfDice;
	
	cout<<"New CR: "<<endl;
	int a;
	cin>>a;
	Change_CR_Stats(name, New, a);
	
	cout<<endl<<"Monster "<<monster_name<<endl<<"Monster intelligence: "<<name.intelligence<<endl<<"Monster charisma: "<<name.charisma<<endl<<"Monster allignment: "<<name.allignment<<endl;
	cout<<endl<<"Monster "<<monster_name<<endl<<"New Monster intelligence: "<<New.intelligence<<endl<<"New Monster Charisma: "<<New.charisma<<endl<<"New Monster strength: "<<New.strength<<endl;
	
	
	
	}
	
	
	
	
	
int Change_CR_Stats(struct Monster name, struct Modify_monster New, int NewChallengeRating){
	int differenceInChallengeRating;
	
	differenceInChallengeRating = fabs(name.CR-NewChallengeRating);
	
	New.AC = name.AC + (differenceInChallengeRating / 2);
	
	New.HP = name.HP + (differenceInChallengeRating * 19);
	
	New.strength = name.strength + differenceInChallengeRating;
	
	New.dextarity = name.dextarity + (differenceInChallengeRating / 3);
	
	New.constitution = name.constitution + (differenceInChallengeRating / 2);
	
	New.intelligence = name.intelligence + ((differenceInChallengeRating / 2) * 3);
	
	New.wisdom = name.wisdom + (differenceInChallengeRating / 2);
	
	New.charisma = name.charisma + differenceInChallengeRating;
}

int Calc_modifier(int mod){
	string ability_modifier;
	if (mod == 0 or mod == 1)
		ability_modifier = "-5";
	else if (mod == 2 or mod == 3)
		ability_modifier = "-4";
	else if (mod == 4 or mod == 5)
		ability_modifier = "-3";
	else if (mod == 6 or mod == 7)
		ability_modifier = "-2";
	else if (mod == 8 or mod ==9)
		ability_modifier = "-1";
	else if (mod == 10 or mod == 11)
		ability_modifier = "0";
	else if (mod == 12 or mod == 13)
		ability_modifier = "+1";
	else if (mod == 14 or mod == 15)
		ability_modifier = "+2";
	else if (mod == 16 or mod == 17)
		ability_modifier = "+3";
	else if (mod == 18 or mod == 19)
		ability_modifier = "+4";
	else if (mod == 20 or mod == 21)
		ability_modifier = "+5";
	else if (mod == 22 or mod == 23)
		ability_modifier = "+6";
	else if (mod == 24 or mod == 25)
		ability_modifier = "+7";
	else if (mod == 26 or mod == 27)
		ability_modifier = "+8";
	else if (mod == 28 or mod == 29)
		ability_modifier = "+9";
	else if (mod >= 30)
		ability_modifier = "+10";
}

















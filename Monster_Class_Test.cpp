#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class Monster{
	string monster_name;
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
	
public:
	void setMonsterName(string name){
		cout<<"Enter the monster name: ";
		getline(cin, name);
		monster_name = name;
	} 														//setter for monster name
	string getMonsterName(){ return monster_name; }			//getter for monster name
	
	void setIntelligence(int intel){ intelligence = intel; }
	int getIntelligence(){ return intelligence; }
	
	void setCharisma(int charm){ charisma = charm; }
	int getCharisma(){ return charisma; }
	
	void setStrength(int str){ strength = str; }
	int getStrength(){ return strength; }
	
	void setWisdom(int wis){ wisdom = wis; }
	int getWisdom(){ return wisdom; }
	
	void setDextarity(int dex){ dextarity = dex; }
	int getDextarity(){ return dextarity; }
	
	void setConstitution(int con){ constitution = con; }
	int getConstitution(){ return constitution; }
	
	void setAC(int armorClass){ AC = armorClass; }
	int getAC(){ return AC; }
	
	void setHP(int hitPoints){ HP = hitPoints;}
	int getHP(){ return HP; }
	
	void setSpeed(int spd){
		speed = spd;
		cin.ignore(32767, '\n');
	}
	int getSpeed(){ return speed; }
	
	void setDamageResistances(string DR){ damage_resistances = DR; }
	string getDamageResistances(){ return damage_resistances; }
	
	void setDamageImmunities(string DI){ damage_immunes = DI; }
	string getDamageImmunities(){ return damage_immunes; }
	
	void setCR(int challengeRating){
		CR = challengeRating;
		cin.ignore(32767, '\n');
	}
	int getCR(){ return CR; }
	
	void setSize(string scale){ size = scale; }
	string getSize(){ return size; }
	
	void setAllignment(string ally){ allignment = ally; }
	string getAllignment(){ return allignment; }
	
	void setConditionImmunities(string CI){ condition_immunes = CI; }
	string getConditionImmunities(){ return condition_immunes; }
	
	void setNumberOfDice(int diceCount){ numberOfDice = diceCount; }
	int getNumberOfDice(){ return numberOfDice; }
	
	void setTypeOfDice(int diceType){ typeOfDice = diceType; }
	int getTypeOfDice(){ return typeOfDice; }
	
//	void obtainMonsterStats(){
//	Monster name;
//	
//	string monster_name;
//	cout<<"Enter the monster's name"<<endl;
//	getline(cin, monster_name);
//	
//	
//	cout<<"intel: "<<endl;
//	cin>>name.intelligence;
//	
//	cout<<"char: "<<endl;
//	cin>>name.charisma;
//	
//	cout<<"str: "<<endl;
//	cin>>name.strength;
//	
//	cout<<"wis: "<<endl;
//	cin>>name.wisdom;
//	
//	cout<<"dex: "<<endl;
//	cin>>name.dextarity;
//	
//	cout<<"con: "<<endl;
//	cin>>name.constitution;
//	
//	cout<<"AC: "<<endl;
//	cin>>name.AC;
//	
//	cout<<"HP: "<<endl;
//	cin>>name.HP;
//	
//	cout<<"speed: "<<endl;
//	cin>>name.speed;
//	cin.ignore(32767, '\n');
//	
//	cout<<"damage resistances:"<<endl;
//	getline(cin, name.damage_resistances);
//	
//	cout<<"damage immunities: "<<endl;
//	getline(cin, name.damage_immunes);
//	
//	cout<<"CR: "<<endl;
//	cin>>name.CR;
//	cin.ignore(32767, '\n');
//	
//	cout<<"size: "<<endl;
//	getline(cin, name.size);
//	
//	cout<<"allignment: "<<endl;
//	getline(cin, name.allignment);
//	
//	cout<<"condition immunities: "<<endl;
//	getline(cin, name.condition_immunes);
//	
//	cout<<"number of attack dice: "<<endl;
//	cin>>name.numberOfDice;
//	
//	cout<<"type of attack dice: "<<endl;
//	cin>>name.typeOfDice;
//	}
};

int main(){
	Monster name;
	name.setSpeed(30);
	name.setAllignment("Lawful Good");
	cout<<"speed: "<<name.getSpeed()<<endl<<"allignment: "<<name.getAllignment()<<endl;
}








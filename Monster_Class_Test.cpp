//This program was an undertaking of my own design. For some backstory, I have, and continue to be, a fan of dungeons and dragons
//As a Dungeon Master(DM) and a player character(PC) I have found the things, beyond the roleplaying, some of the most fun and
//awe-inpiring parts of the worlds greatest roleplaying game. But, as a DM, I have always seen the community of D&D as one of
//immense joy and imagination. There are so many pieces of homebrewed material for items and monsters I find it hard to choose
//which, if any, to choose. And what if I want a monster made by someone in the community; but, I want a stronger version of it.
//I've not the time to create several stronger versions and then test them all out on several parties of PCs. So I thought, "why
//don't I just create a program that can do it for me?" That is the inspiration behind this Monster_Class_Test.cpp file. I
//thought by creating a class to hold all of the attributes of the monster I could create a number of functions and processes
//that would make the monster stronger, but at a linear rate. I.e. make him stronger, but most importantly, balanced. I used the
//statistical differences between two varieties of goblins from the monster manual of D&D to determine the increase or decrease
//a monsters statistics would have based on the change in their Challenge rating.

#include<iostream>
#include<string>
#include<math.h>

using namespace std;

class Monster{
	
	int intelligence, charisma, strength, wisdom, dextarity, constitution, AC, HP, speed, CR, numberOfDice, typeOfDice;
	
	string monster_name, damage_resistances, damage_immunes, size, allignment, condition_immunes;
	
									//the above represents all of the private data members
public:									//of the Monster class.
									//What follows below is all of the public member functions
	void setMonsterName(string name){				//for the Monster class.
		cout<<"Enter the monster name: ";
		getline(cin, name);
		monster_name = name;
	} 								//setter for monster name
	string getMonsterName(){ return monster_name; }			//getter for monster name
	
	void setIntelligence(int intel){ intelligence = intel; }	//setter for monster intelligence
	int getIntelligence(){ return intelligence; }			//getter for monster intelligence
	
	void setCharisma(int charm){ charisma = charm; }		//setter for monster charisma
	int getCharisma(){ return charisma; }				//getter for monster charisma
	
	void setStrength(int str){ strength = str; }			//setter for monster strength
	int getStrength(){ return strength; }				//getter for monster strength
	
	void setWisdom(int wis){ wisdom = wis; }			//setter for monster wisdom
	int getWisdom(){ return wisdom; }				//getter for monster wisdom
	
	void setDextarity(int dex){ dextarity = dex; }			//setter for monster dextarity
	int getDextarity(){ return dextarity; }				//getter for monster dextarity
	
	void setConstitution(int con){ constitution = con; }		//setter for monster constitution
	int getConstitution(){ return constitution; }			//getter for monster constitution
	
	void setAC(int armorClass){ AC = armorClass; }			//setter for monster AC
	int getAC(){ return AC; }					//getter for monster AC
	
	void setHP(int hitPoints){ HP = hitPoints;}			//setter for monster HP
	int getHP(){ return HP; }					//getter for monster HP
	
	void setSpeed(int spd){						
		speed = spd;
		cin.ignore(32767, '\n');
	}								//setter for monster speed
	int getSpeed(){ return speed; }					//getter for monster speed
	
	void setDamageResistances(string DR){ damage_resistances = DR; }//setter for monster damage_resistances
	string getDamageResistances(){ return damage_resistances; }	//getter for monster damage_resistances
	
	void setDamageImmunities(string DI){ damage_immunes = DI; }	//setter for monster damage_immunes
	string getDamageImmunities(){ return damage_immunes; }		//getter for monster damage_immunes
	
	void setCR(int challengeRating){
		CR = challengeRating;
		cin.ignore(32767, '\n');
	}								//setter for monster callengeRating
	int getCR(){ return CR; }					//getter for monster callengeRating
	
	void setSize(string scale){ size = scale; }			//setter for monster size
	string getSize(){ return size; }				//getter for monster size
	
	void setAllignment(string ally){ allignment = ally; }		//setter for monster allignment
	string getAllignment(){ return allignment; }			//getter for monster allignment
	
	void setConditionImmunities(string CI){ condition_immunes = CI; }//setter for monster condition_immunes
	string getConditionImmunities(){ return condition_immunes; }	 //getter for monster condition_immunes
	
	void setNumberOfDice(int diceCount){ numberOfDice = diceCount; }//setter for monster numberOfDice
	int getNumberOfDice(){ return numberOfDice; }			//getter for monster numberOfDice
	
	void setTypeOfDice(int diceType){ typeOfDice = diceType; }	//setter for monster typeOfDice
	int getTypeOfDice(){ return typeOfDice; }			//getter for monster typeOfDice
	
};

int main(){
	Monster name;
	name.setSpeed(30);
	name.setAllignment("Lawful Good");
	cout<<"speed: "<<name.getSpeed()<<endl<<"allignment: "<<name.getAllignment()<<endl;
}








#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int Change_CR_Stats(Monster, int);

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
	std::string damage_resistances;
	std::string damage_immunes;
	int CR;
	std::string size;
	std::string allignment;
	std::string condition_immunes;
	int numberOfDice;
	int typeOfDice;
};



int main(){
	
	std::string monster_name;
	std::cout<<"Enter the monster's name"<<std::endl;
	std::getline(std::cin, monster_name);
	
	Monster name;
	std::cout<<"intel: "<<std::endl;
	std::cin>>name.intelligence;
	std::cout<<"char: "<<std::endl;
	std::cin>>name.charisma;
	std::cout<<"str: "<<std::endl;
	std::cin>>name.strength;
	std::cout<<"wis: "<<std::endl;
	std::cin>>name.wisdom;
	std::cout<<"dex: "<<std::endl;
	std::cin>>name.dextarity;
	std::cout<<"con: "<<std::endl;
	std::cin>>name.constitution;
	std::cout<<"AC: "<<std::endl;
	std::cin>>name.AC;
	std::cout<<"HP: "<<std::endl;
	std::cin>>name.HP;
	std::cout<<"speed: "<<std::endl;
	std::cin>>name.speed;
	std::cin.ignore(32767, '\n');
	std::cout<<"damage resistances:"<<std::endl;
	std::getline(std::cin, name.damage_resistances);
	std::cout<<"damage immunities: "<<std::endl;
	std::getline(std::cin, name.damage_immunes);
	std::cout<<"CR: "<<std::endl;
	std::cin>>name.CR;
	std::cin.ignore(32767, '\n');
	std::cout<<"size: "<<std::endl;
	std::getline(std::cin, name.size);
	std::cout<<"allignment: "<<std::endl;
	std::getline(std::cin, name.allignment);
	std::cout<<"condition immunities: "<<std::endl;
	std::getline(std::cin, name.condition_immunes);
	std::cout<<"number of attack dice: "<<std::endl;
	std::cin>>name.numberOfDice;
	std::cout<<"type of attack dice: "<<std::endl;
	std::cin>>name.typeOfDice;
	
	
	std::cout<<name.intelligence<<std::endl<<name.charisma<<std::endl<<name.allignment;
	}
	
	
	
	
	
int Change_CR_Stats(Monster name, int NewChallengeRating){
	int differenceInChallengeRating;
	differenceInChallengeRating = fabs(name.CR-NewChallengeRating);
	
}


//The car class problem, pg.500, ninth edition

#include<iostream>
#include<string>
#include<math.h>


class Car{
	int year;
	std::string make;
	int speed;
	
public:
	void constructCar(int car_year, std::string make_name){
		year = car_year;
		make = make_name;
		speed = 0;
	}
	int getYear(){return year;}
	void setYear(int year_num){ year = year_num;	}
	
	std::string getMake(){return make;}
	void setMake(std::string make_name){make =make_name;}
	
	int getSpeed(){return speed;}
	void setSpeed(int spd){speed = spd;}
	
	int accelerate(){
		speed += 5;
	}
	
	int brake(){
		speed -= 5;
	}
};










int main(){
	Car fit;
	fit.constructCar(2008, "Honda fit");
	fit.accelerate();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.accelerate();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.accelerate();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.accelerate();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.accelerate();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.brake();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.brake();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.brake();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.brake();
	std::cout<<fit.getSpeed()<<std::endl;
	fit.brake();
	std::cout<<fit.getSpeed()<<std::endl;
}

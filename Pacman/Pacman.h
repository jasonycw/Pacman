#ifndef PACMAN_H
#define PACMAN_H
//This is a class of creating a object of Pacman
//In this assignment, there should be only one Pacman object exists

class Pacman
{
	private:
		int _speed;	//Speed of Pacman
		int _state;	//0 = prey, 1 = predator
		int _positionX;	//The position of Pacman in X coordinate
		int _positionY;	//The position of Pacman in Y coordinate
		bool _NotAlive;	//0,false = Dead,      Not 0,Alive = Alive
	public:
		//Need a type-conversion constructor

		void setSpeed();	//Set/Update the speed of Pacman
		int getSpeed();		//Get the speed of Pacman
		void setPosition();	//Set/Upadte the position of Pacman
		int getX();			//Get the position of Pacman in X coordinate
		int getY();			//Get the position of Pacman in Y coordinate
		void setNotAlive();	//Set/Upadte the whether the Pacman is dead or alive
		bool getNotAlive();	//Get the whether the Pacman is dead or alive
		void setState();	//Set/Update  the state of Pacman
		int getState();		//Get the state of Pacman

		void move(int d,int g)	//Move the pacman in d direction(0 = up, 1 = right, 2 = down, 3 = left) with distance g
};
#endif
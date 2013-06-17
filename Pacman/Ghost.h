#ifndef GHOST_H
#define GHOST_H
//This is a class for creating objects of ghost in a map
//Each map should have 4 ghosts
//Can be created by array of class e.g. Ghost[3] or 4 distinct Ghost objects

class Ghost
{
	private:
		int _speed;	//Speed of ghost
		int _type;	//1 = sth, 2 = sth, 3 = sth, 4 = sth
		int _state;	//0 = predator, 1 = prey
		int _positionX;	//The position of ghost in X coordinate
		int _positionY;	//The position of ghost in Y coordinate
		bool _NotAlive;	//0,false = Dead, 1,Alive = Alive
	public:
		//Need a type-conversion constructor

		void setSpeed();	//Set/Update the speed of ghost
		int getSpeed();		//Get the speed of ghost
		void setType();		//Set/Update the type of ghost
		int getType();		//Get the type of ghost
		void setPosition();	//Set/Upadte the position of ghost
		int getX();			//Get the position of ghost in X coordinate
		int getY();			//Get the position of ghost in Y coordinate
		void setNotAlive();	//Set/Upadte the whether the ghost is dead or alive
		bool getNotAlive();	//Get the whether the ghost is dead or alive
		void setState();	//Set/Update  the state of ghost
		int getState();		//Get the state of ghost

		//Maybe sth else.....
};
#endif
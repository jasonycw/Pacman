#ifndef MAP_H
#define MAP_H
//This is a class for creating objects which store the data of map
//In this assignment, there should be two Map objects
//One is for processing , one is for backup

class Map
{
	private:
		int _sizeX;	//The size of map in X direction
		int _sizeY;	//The size of map in Y direction
		int _noOfDot;	//The total number of dot in map
		char[][] _symbol;	//Store the symbol on the map
	public:
		//Need a copy constructor for the use of copying a map after doing member function readTextfileToMap()
		//for backup

		void readTextFileToMap(); //Read map from text file, store symbols in each grid to _symbol[][]
		void updateNumberOfDot;	//Update the number of dot in the _symbol[][]
		int getNumberOfDot;	//Return the value of number of dot
		void displayMap();	//Display map
		void updateMap();	//update map with specific coordinate X and Y

};
#endif
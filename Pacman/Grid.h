
#ifndef GRID_H 
#define GRID_H 
// This is a class for creating objects of every single grid on the map
// Should be create with an array, e.g. Grid grid[map.sizeX][map.sizeY]
class Grid 
{ 
	private: 
		int _gridType; // 0 = wall, 1 = space
		int _hasDot;	// 0 = no Dot, 1 = has Dot 2 = has Power Dot
		int _fruitType;	// 0 = no fruit, 1 = Cherry, 2 = Strawberry, 3 = Orange
		int _character;	// 0 = no character, 1 = Pacman, 2 = sth, 3 = sth, 4 = sth, 5 = sth
	public: 
		int getGridType()
		void setGridType()
		int getHasDot()
		void setHasDot()
		int getFruitType()
		void setFruitType()
		int getCharacter()
		void setCharacter()
		//maybe sth else.....
		
}; 
#endif
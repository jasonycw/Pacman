#ifndef GAMESTATE_H
#define GAMESTATE_H
#include <iostream>
using namespace std;

class GameState
{
	private:
		int level;		//The level of the progressing game
		int totalScore;	//The total score of the progressing game
		int noOfDot;	//The number of dot of the progressing game
		int life;		//The number of life of the progressing game
	public:
		//Need a type-conversion constructor

		void setLevel();		//Set/Update the level of the progressing game
		int getLevel();			//Get the level of the progressing game
		void setTotalScore();	//Set/Update the total score of the progressing game
		int getTotalScore();	//Get the total score of the progressing game
		void setNoOfDot();		//Set/Update the number of dot of the progressing game
		int getLevel();			//Get the number of dot of the progressing game
		void setLife();		//Set/Update the life of the progressing game
		int getLife();			//Get the life of the progressing game

};

#endif
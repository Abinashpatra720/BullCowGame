/*
	MAiTHis file contain all the method to make the game 
*/
#include "FBullCowGame.h"

using Int32 = int;

//constructor
FBullCowGame::FBullCowGame()
{
	//you can call a method of the class from the constructor
	Reset();
}

// Getters
Int32 FBullCowGame::getMaxTries() const
{
	return maxTries;
}

Int32 FBullCowGame::getCurrentTry()const
{
	return currentTry;
}

bool FBullCowGame::isGameWon() const
{
	return false;
}

//


//Reset a game at the end of one
void FBullCowGame::Reset()
{

	//magic numbers are bad
	constexpr Int32 MAX_NUMBER_TRIES = 8;
	
	maxTries = MAX_NUMBER_TRIES;
	
	currentTry = 1;
	
	return;
}

//Reset a game at the end with different tries
void FBullCowGame::Reset(Int32 newMaxTries)
{
	maxTries = newMaxTries;

	currentTry = 1;

	return;
}



//TODO complete the method
bool FBullCowGame::checkGuessValidity(FString)
{
	return false;
}

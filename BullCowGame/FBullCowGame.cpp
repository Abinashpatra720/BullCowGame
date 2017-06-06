#include "FBullCowGame.h"

//constructor
FBullCowGame::FBullCowGame()
{
	//you can call a method of the class from the constructor
	Reset();
}

// Getters
int FBullCowGame::getMaxTries() const
{
	return maxTries;
}

int FBullCowGame::getCurrentTry()const
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
	constexpr int MAX_NUMBER_TRIES = 8;
	
	maxTries = MAX_NUMBER_TRIES;
	
	currentTry = 1;
	
	return;
}

//Reset a game at the end with different tries
void FBullCowGame::Reset(int newMaxTries)
{
	maxTries = newMaxTries;

	currentTry = 1;

	return;
}



//TODO complete the method
bool FBullCowGame::checkGuessValidity(std::string)
{
	return false;
}
